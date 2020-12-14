#include<stdio.h>
#pragma warning(disable:4996)


int year, month, day;
int run[12] = { 31,29,31,30,31,30,31,31,31,30,30,31 };
int ping[12] = { 31,28,31,30,31,30,31,31,31,30,30,31 };
char weekday[7][20] = { "一","二","三","四","五","六","日" };
void print()
{
	printf("***************************************************\n");
}
void printBegin()
{
	printf("\t\t\t万年历\n");
	print();
	for (int i = 0; i < 7; i++)
	{
		printf("%s\t", weekday[i]);
	}
	printf("\n");
}
int leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}
int sumDay(int year, int month, int day, int run[], int ping[])
{
	int i, sum = 0;
	for (i = 1990; i < year; i++)
	{
		if (leap(i) == 1)
			sum += 366;
		else
			sum += 365;
	}
	for (i = 0; i < month - 1; i++)
	{
		if (leap(year) == 1)
			sum = sum + run[i];
		else
			sum = sum + ping[i];
	}
	return sum;
}
void printData(int sum, int year, int month)
{
	int result, temp, i;
	result = sum % 7;
	for (i = 0; i < result; i++)
		printf("\t");
	temp = 7 - result;
	if (leap(year) == 1)
	{
		for (i = 1; i <= run[month - 1]; i++)
		{
			printf("%2d\t", i);
			if (i == temp || (i - temp) % 7 == 0)
				printf("\n");
		}
		printf("\n");
	}
	else
	{
		for (i = 1; i <= ping[month - 1]; i++)
		{
			printf("%d\t", i);
			if (i == temp || (i - temp) % 7 == 0)
				printf("\n");
		}
		printf("\n");
	}
}


int main()
{
	printf("请输入你要查找的日期: 年 月 日:");
	scanf("%d%d%d", &year, &month, &day);
	printBegin();
	int sum = sumDay(year, month, day, run, ping);
	printData(sum, year, month);
	print();
	return 0;
}