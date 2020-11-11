#include<stdio.h>

int BinSearch(int *arr, int len, int val)
{
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (val < arr[mid])
		{
			right = mid - 1;
		}
		else if (val > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[9] = {15,23,50,55,63,68,70,83,90};
	int a = BinSearch(arr,9,90);
	printf("ÏÂ±êÎª£º%d\n", a);

}