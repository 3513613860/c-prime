#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100] = { "0" };  //定义一个字符数组，存放在字符常量区
	char* p = str;  //定义一个指针变量
	printf("请输入一个字符串\n");
	gets(str);  //输入一个字符串
	int n = strlen(str);
	int m = 0;
	while (*p != '\0')  //求字符数组的长度，以'\0'结束
	{
		p++;
		m++;
	}
	int i = 0;
	m = m - 1;
	while (i < m)   //遍历数组
	{
		if (str[i] == str[m])  //相等时，则继续
		{
			i++;
			m--;
			continue;
		}
		else                    //不相等时，则直接退出
		{  
			printf("该字符串不是回文\n");
			return;
		}
	}
	printf("该字符串是回文\n");
	return 0;
}