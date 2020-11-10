#include<stdio.h>

int main()
{
	int arr[7] = { 25,20,69,0,364,36,15 };
	for (int i = 1; i < 7; i++)
	{
		for (int j = 0; j < 7 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}