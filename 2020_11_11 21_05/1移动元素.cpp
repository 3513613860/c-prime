#include<stdio.h>
#pragma warning (disable:4996)

void move(int *arr, int len)
{
	int i = 0;
	int j = 0;
	for (int i = 0; i < len; i++)
	{
		if (*(arr+i) != 0)
		{
			*(arr + j) = arr[i];
			j++;
		}
	}
	while (j < len)
	{
		*(arr + j) = 0;
		j++;
	}
}

int main()
{
	int arr[5] = { 5,0,36,0,9 };
	move(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("\n");
	return 0;
}