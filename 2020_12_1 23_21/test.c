#include<stdio.h>

//µİ¹é
int fib(int m)
{
	if (m == 0)
	{
		return 0;
	}
	else if (m == 1)
	{
		return 1;
	}
	else
	{
		return fib(m - 1) + fib(m - 2);
	}
}

//µü´ú
int fib_d(int m)
{
	int sum = 0;
	int a = 0;
	int b = 1;
	if (m == 0)
	{
		return a;
	}
	if (m == 1)
	{
		return b;
	}
	while (m >= 2)
	{
		sum = a + b;
		a = b;
		b = sum;
		m--;
	}
	return sum;

}
int main()
{
	int n = 2^40; 
	//int k = fib(n);
	int k = fib_d(n);
	printf("%d\n", k);
	return 0;
}