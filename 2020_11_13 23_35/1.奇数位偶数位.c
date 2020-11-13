#include<stdio.h>

//int main()
//{
//	int n = 11;
//	printf("奇数位为：");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		if ((n >> i) & 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//	}
//
//	printf("\n偶数位为：");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		if ((n >> i) & 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//	}
//}

int main()
{
	int n = 15;
	printf("奇数位为：");
	for (int  i = 1; i <= 32; i += 2)
	{
		if ((n << i) & 0x80000000)
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}

	printf("\n偶数位为：");
	for (int i = 30; i >= 0; i -= 2)
	{
		if ((n >> i) & 1)
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}
}

//int func(int n)
//{
//	int count = 0;
//	int i = 32;
//	while (i > 0)
//	{
//		if (n & (1 << 31))
//		{
//			count++;
//		}
//		n = n << 1;
//		i--;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	printf("%d\n", func(n));
//	return 0;
//}