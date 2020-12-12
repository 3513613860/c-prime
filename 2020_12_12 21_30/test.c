#include<stdio.h>
int main()
{
	char str[100];
	int i;
	int zm = 0, sz = 0, kg = 0, qt = 0;
	printf("请输入一个字符串:");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			zm++;
		else if (str[i] >= '0' && str[i] <= '9')
			sz++;
		else if (str[i] == ' ')
			kg++;
		else
			qt++;
	}
	printf("字母个数为%d\n数字个数为%d\n空格个数为%d\n其他字符个数为%d\n", zm, sz, kg, qt);
	return 0;
}