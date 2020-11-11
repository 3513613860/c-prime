package demo03;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.SimpleDateFormat;
import java.util.Date;

public class MyFrame extends JFrame {

    JLabel timeLabel = new JLabel("00:00:00");
    JButton button = new JButton("显示时间");

    public MyFrame(String title){
        super(title);
        //内容面板
        Container contentPane = getContentPane();
        contentPane.setLayout(new FlowLayout());

        //向内容面板里面添加控件，如JLabel，JButton
        contentPane.add(timeLabel);
        contentPane.add(button);

        //创建监听器对象
        MyButtonListener listener = new MyButtonListener();

        //把监听器对象交给按钮
        button.addActionListener(listener);
    }

    private class MyButtonListener implements ActionListener{
        @Override
        public void actionPerformed(ActionEvent  e){
            System.out.println("按钮被点击……");
            MyFrame.this.showTime();
        }
    }

    public void showTime(){
        SimpleDateFormat sdf = new SimpleDateFormat("HH:mm:ss");
        String timestr = sdf.format(new Date());
        timeLabel.setText(timestr);
    }
}
