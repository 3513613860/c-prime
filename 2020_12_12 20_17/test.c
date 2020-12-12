#include<stdio.h>

int frogjumpstep(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return frogjumpstep(n - 1) + frogjumpstep(n - 2);
	}
}
int main()
{
	int n = 5;
	int k = frogjumpstep(n);
	printf("%d\n",k);
	return 0;
}