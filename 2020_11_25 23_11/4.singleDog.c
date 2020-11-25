//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

#include<stdio.h>

int main()
{
	int arr[10] = { 4,3,5,2,5,3,2,1,8,8 };
	for (int i = 0; i < 10; i++)
	{
		int k = 0;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				k++;
			}
		}
		if (k == 1)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}