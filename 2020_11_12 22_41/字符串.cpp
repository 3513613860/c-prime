#include<stdio.h>
#include<string.h>
void reverse_str(char* begin, char* end)
{
	while (begin < end)
	{
		int temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}
}
int main()
{
	char str[100] = { 0 };
	fgets(str, sizeof(str) - 1, stdin);
	str[strlen(str) - 1] = '\0';

	char* begin = str;
	char* end = str;
	while (*end != '\0')
	{
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse_str(begin, end - 1);

		if (*end != '\0')
		{
			end++;
		}
		begin = end;
	}
	reverse_str(str, str + strlen(str) - 1);
	printf("%s\n", str);
	return 0;
}