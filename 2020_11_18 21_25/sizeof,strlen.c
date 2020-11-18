#include<stdio.h>

char* strcpy_func(char* des, char* src)
{
	char* s = des;
	while (*src != '\0')
	{
		*s++ = *src++;
	}
	return des;
}
int main()
{
	char des[100] = "hjsolssss";
	char src[20] = "hello";
	printf("%s\n", strcpy_func(des, src));
	return 0;
}