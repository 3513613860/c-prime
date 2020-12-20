#include<stdio.h>
int main()
{
	void mi(int n, int r);
	int m;
	scanf_s("%d", &m);
	if (m >= 1)
		mi(m, 0);
	else
		printf("data error\n");
	return 0;
}

void mi(int n, int r)
{
	if (n == 1)
		printf("2(%d)", r);
	else
	{
		mi(n / 2, r + 1);
		if (n % 2 == 1)
			printf("+2(%d)", r);
	}

}