#include<stdio.h>

void func(int n)
{
	int arr[7] = { 0 };
	int m = n;
	int count = 0;
	while (n)
	{
		int k = n % 10;
		n = n / 10;
		arr[count++] = k;
	}

	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		int s = 1;
		for (int j = 0; j < count; j++)
		{
			s = s * arr[i];
		}
		sum = sum + s;
	}

	if (m == sum)
	{
		printf("%d ", m);
	}
}

int main()
{
	for(int i = 0; i < 100000; i++)
	{ 
		func(i);
    }
	return 0;
}