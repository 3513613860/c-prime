#include<stdio.h>

int func(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return n * func(n - 1);
	}
}

int main()
{
	printf("������һ����������");
	int n;
	scanf_s("%d", &n);
	printf("%d\n", func(n));
	return 0;
}