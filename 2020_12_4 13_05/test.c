#include<stdio.h>

//ÏûÊ§µÄÊı×Ö
int main()
{
	int arr[6] = { 5,1,0,6,4,3 };
	int sum = 0;
	for (int i = 0; i < 6; i++)
	{
		sum ^= (i ^ arr[i]);
	}
	sum = sum ^ 6;
	printf("%d\n", sum);
	return 0;
}