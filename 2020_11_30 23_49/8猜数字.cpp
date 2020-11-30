#include<stdio.h>
int main()
{
	int guess;
	int real = 85;
	while (true)
	{
		printf("请输入你猜测的数字：");
		scanf_s("%d", &guess);
		if (guess < real)
		{
			printf("猜测数字太小了\n");
		}
		else if (guess > real)
		{
			printf("猜测数字太大了\n");
		}
		else
		{
			printf("恭喜你，猜中了\n");
			break;
		}
	}
}