#include<stdio.h>
int main()
{
	char str[100];
	int i;
	int zm = 0, sz = 0, kg = 0, qt = 0;
	printf("������һ���ַ���:");
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
	printf("��ĸ����Ϊ%d\n���ָ���Ϊ%d\n�ո����Ϊ%d\n�����ַ�����Ϊ%d\n", zm, sz, kg, qt);
	return 0;
}