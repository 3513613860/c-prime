#include<stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	scanf_s("%d%d", &x, &y);
	z = x * y;

	if (x < y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	int k = x % y;
	while (k)
	{
		x = y;
		y = k;
		k = x % y;
	}
	printf("���Լ��Ϊ��%d\n", y);
	printf("���Լ��Ϊ��%d\n", z/y);
	return 0;
}