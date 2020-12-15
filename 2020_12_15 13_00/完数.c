#include<stdio.h>
int main()
{
	int i,j,m,a[20],s,k;
	for(i=2;i<=1000;i++)
	{
		s=0;
		k=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				s=s+j;
			
		}
		if(i==s)
			
		{
			printf("%d:",i);
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				printf("%d ",j);
			}
			printf("\n");
		}
		


	}
	
			return 0;
}