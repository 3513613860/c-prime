#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int  Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("##################################\n");
	printf("####    1.Add         2.Sub   ####\n");
	printf("####    3.Mul         4.Div   ####\n");
	printf("####           5.Exit         ####\n");
	printf("please select# ");
}
int main()
{
	int select = 0;
	int quit = 0;
	int x = 0;
	int y = 0;

	int (*p[5])(int x, int y) = { NULL,Add,Sub,Mul,Div };
	while (!quit)
	{
		menu();
		scanf_s("%d", &select);
		if (select == 5)
		{
			printf("退出！");
			break;
		}
		if (select < 1 || select > 4)
		{
			printf("please select again\n");
			continue;
		}
		printf("请输入两个数：");
		scanf_s("%d%d", &x, &y);
		printf("%d\n", (*p[select])(x,y));
	}
	return 0;
}