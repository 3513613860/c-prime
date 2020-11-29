using System;



namespace test03

{

    class Program

    {

        static void Main(string[] args)

        {

            //月份数组

            String[] arr1 = { "January", "February", "March", "April", "May", "June", "July", "August",

            "September", "October", "November", "December" };

            //日期数组

            int[] arr2 = new int[12] { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

            try

            {

                int n;

                Console.Write("请输入年份：");

                int m = Convert.ToInt32(Console.ReadLine());

                Console.Write("请输入数字：");   

                n = Convert.ToInt32(Console.ReadLine());  //从控制台输入

                if((m % 4== 0)&& (m %100)!=0 || m % 400 == 0)

                {

                    arr2[1] = 29;

                    if (n < 1 || n > 366)                         //不符合条件抛出异常

                    {

                        throw new ArgumentOutOfRangeException("输入错误！！！");

                    }

                }

                else if (n < 1 || n > 365)                         //不符合条件抛出异常

                {

                    throw new ArgumentOutOfRangeException("输入错误！！！");

                }

                int i;

                for(i = 0; i < 12; i++)     //for循环遍历数组

                {

                    if(n > arr2[i])

                    {

                        n = n - arr2[i];   //大于时减去当前月份

                    }

                    else if(n <= arr2[i])  //小于时直接退出循环

                    {

                        break;

                    }

                }



                Console.WriteLine("{0} {1}",arr1[i],n);  //打印月份日期



            }

            catch(Exception caught)       //捕获异常

            {

                Console.WriteLine(caught);

            }

        }

    }

}