#include<stdio.h>

void solve(int M, int N) {
    // write code here
    char a[100] = { 0 };
    int i = 0;
    int k = M;
    if (M < 0)
    {
        a[i++] = '-';
        M = -M;
    }
    while (M)
    {
        if (M % N >= 0 && M % N <= 9)
        {
            a[i++] = M % N + 48;
        }
        else {
            a[i++] = M % N + 55;
        }
        M /= N;
    }
    printf("%s\n", a);
    if (k >= 0)
    {
        for (int j = 0; j < i / 2; j++)
        {
            char temp = a[j];
            a[j] = a[i - 1 - j];
            a[i - 1 - j] = temp;
        }
    }
    else {
        for (int j = 1; j < i / 2; j++)
        {
            char temp = a[j];
            a[j] = a[i  - j];
            a[i  - j] = temp;
        }
    }
    printf("%s\n", a);
    return a;
}

int main()
{
    int M = -100000000;
    int N = 16;
    solve(M, N);
    return 0;
}