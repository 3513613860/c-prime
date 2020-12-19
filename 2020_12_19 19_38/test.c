#include<stdio.h>
int a[100];
int main()
{
	void comb(int m, int k);
	int n = 5, r = 3;


	if (r > n)
		printf("input n,r error\n");
	else
	{
		a[0] = r;
		comb(n, r);
	}
	return 0;
}
void comb(int m, int k)
{
	int i, j;
	for (i = m; i >= k; i--)
	{
		a[k] = i;
		if (k > 1)
		{
			comb(i - 1, k - 1);

		}
		else
			for (j = a[0]; j > 0; j--)
				printf("%d", a[j]);
		printf("\n");

	}
}