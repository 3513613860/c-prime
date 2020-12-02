#include<stdio.h>

int main()
{
    int arr[2] = { 0,0 };
    int nums[4] = { 1,2,5,2 };
    int n = 4;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ nums[i];
    }
    int m = 0;
    while (sum != 0)
    {
        m++;
        if ((sum & 1) == 1)
        {
            break;
        }
        sum = sum >> 1;
    }

    for (int i = 0; i < n; i++)
    {
        int k = nums[i] >> m-1;
        if ((k & 1) == 1)
        {
            arr[0] ^= nums[i];
        }
        else
        {
            arr[1] ^= nums[i];
        }
    }
    printf("%d %d\n", arr[0], arr[1]);
}