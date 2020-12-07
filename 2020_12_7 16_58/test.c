#include<stdio.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {

    for (int i = ASize - 1; i >= 0; i--)
    {
        K = K + A[i];
        A[i] = K % 10;
        K = K / 10;
    }
    if (K > 0)
    {
        int count = 0;
        int temp = K;
        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }
        int* a = (int*)malloc(sizeof(int) * (ASize + count));
        *returnSize = ASize + count;
        for (int i = count - 1; i >= 0; i--)
        {
            a[i] = K % 10;
            K = K / 10;
        }
        int j = 0;
        for (int i = count; i < (*returnSize); i++)
        {
            a[i] = A[j++];
        }
        return a;
    }
    *returnSize = ASize;
    return A;
}


void print_p(int* p,int *r)
{
    for(int i = 0;i < *r;i++)
    {
        printf("%d ", *(p++));
    }
}
int main()
{
    int arr[4] = { 2,0,4,9 };
    int len = 4;
    int* r = &len;
    int* p = addToArrayForm(arr,len, 49999,r);
    print_p(p,r);
}