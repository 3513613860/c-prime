#include<stdio.h>
int main()
{
	int guess;
	int real = 85;
	while (true)
	{
		printf("��������²�����֣�");
		scanf_s("%d", &guess);
		if (guess < real)
		{
			printf("�²�����̫С��\n");
		}
		else if (guess > real)
		{
			printf("�²�����̫����\n");
		}
		else
		{
			printf("��ϲ�㣬������\n");
			break;
		}
	}
}