#include<stdio.h>
#pragma warning(disable:4996)

int s1, s2;
int main()
{
	int calculatemin(int a[], int n);
	int calculatemax(int a[], int n);
	int j, n, a[100], b[100], max, min;
	printf("How many datas?\n");
	scanf("%d", &n);
	for (j = 0; j < n; j++)
	{
		scanf("%d", &a[j]);
		b[j] = a[j];
	}
	min = calculatemin(a, n);
	max = calculatemax(b, n);
	printf("max-min=%d\n", max - min);
	return 0;
}
int calculatemin(int a[], int n)
{
	void max2(int a[], int n);
	while (n > 2)
	{
		max2(a, n);
		a[s1] = a[s1] * a[s2] + 1;
		a[s2] = a[n - 1];
		n = n - 1;
	}
	return (a[0] * a[1] + 1);
}
void max2(int a[], int n)
{
	int j;
	if (a[0] >= a[1])
	{
		s1 = 0;
		s2 = 1;
	}
	else
	{
		s1 = 1;
		s2 = 0;
	}
	for (j = 2; j < n; j++)
	{
		if (a[j] > a[s1])
		{
			s2 = s1;
			s1 = j;
		}
		else  if (a[j] > a[s2])
			s2 = j;
	}
}

int calculatemax(int a[], int n)
{
	void min2(int b[], int n);
	while (n > 2)
	{
		min2(a, n);
		a[s1] = a[s1] * a[s2] + 1;
		a[s2] = a[n - 1];
		n = n - 1;
	}
	return (a[0] * a[1] + 1);
}
void min2(int a[], int n)
{
	int j;
	if (a[0] <= a[1])
	{
		s1 = 0;
		s2 = 1;
	}
	else
	{
		s1 = 1;
		s2 = 0;
	}
	for (j = 2; j < n; j++)
	{
		if (a[j] < a[s1])
		{
			s2 = s1;
			s1 = j;
		}
		else  if (a[j] < a[s2])
			s2 = j;
	}
}