public class TestDemo {
    public static void main(String[] args) {
        MyLinkedList list = new MyLinkedList();
        list.createLinkedList();
        list.traverse();

        int a = list.findLastNode().val;
        System.out.println("链表的倒数第一个结点："+a);

        int b = list.findLastTwoNode().val;
        System.out.println("链表的倒数第二个结点："+b);

        int c = list.findN(2).val;
        System.out.println("链表的第2个结点："+c);

        boolean d = list.findKey(10);
        System.out.println("10在单链表中？ "+d);

        list.addFirst(15);
        list.traverse();

        list.addLast(30);
        list.traverse();

        list.addIndex(0,12);
        list.addIndex(4,36);
        list.traverse();

        list.deleteKey(2);
        list.traverse();

        list.delete(7);
        list.traverse();

        list.clear();
        list.traverse();
    }
}
