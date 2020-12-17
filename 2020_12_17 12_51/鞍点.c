#include<stdio.h>
void readmtr(int a[3][3],int n)
{
		int i,j;
		printf("input n*n matric:");
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
}
void printmtr(int a[3][3],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d   ",a[i][j]);
		printf("\n");
	}
}
int main()
{
	int a[3][3];
	int i,j,k,minj,t,n=3,kz=0;
	readmtr(a,n);
	printmtr(a,n);
	for(i=0;i<n;i++)
	{
		t=a[i][0];
		minj=0;
		for(j=1;j<n;j++)
			if(a[i][j]<t)
			{
				t=a[i][j];
				minj=j;
			}
		for(k=0;k<n;k++)
		if(a[k][minj]>t)
		break;
        if(k<n)
			continue;
		printf("%d\n",a[i][minj]);
		kz=1;
		break;
	}
}