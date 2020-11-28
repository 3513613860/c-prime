using System;

namespace 近似值π
{
    class Program
    {
        static void Main(string[] args)
        {
			double n = Single.Parse(Console.ReadLine()); //输入半径
			double sum = 0.5;  //累加值
			double t = 1.0;    //初始值
			double t1 = 1.0;
			double t3 = 0.5;
			int s = 1;
			double k = Math.Pow(10, -10);  //调用pow函数
			do
			{
				t1 = t1 * s / (s + 1); 
				s = s + 2;              //累加2
				t3 = t3 * 0.5*0.5;
				t = t1 * (1.0/s) * t3;  //每项的值
				sum += t;
			} while (t > k);       //所加项小于1e-10
			double r = (6 * sum) * n * n;  //计算面积

			Console.WriteLine(r);    //输出面积
		}
    }
}
