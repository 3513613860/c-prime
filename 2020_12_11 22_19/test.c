#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100] = { "0" };  //����һ���ַ����飬������ַ�������
	char* p = str;  //����һ��ָ�����
	printf("������һ���ַ���\n");
	gets(str);  //����һ���ַ���
	int n = strlen(str);
	int m = 0;
	while (*p != '\0')  //���ַ�����ĳ��ȣ���'\0'����
	{
		p++;
		m++;
	}
	int i = 0;
	m = m - 1;
	while (i < m)   //��������
	{
		if (str[i] == str[m])  //���ʱ�������
		{
			i++;
			m--;
			continue;
		}
		else                    //�����ʱ����ֱ���˳�
		{  
			printf("���ַ������ǻ���\n");
			return;
		}
	}
	printf("���ַ����ǻ���\n");
	return 0;
}