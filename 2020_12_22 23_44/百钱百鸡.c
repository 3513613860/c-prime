#include<stdio.h>
int main()
{
	int x,y;
	for(x=1;x<=20;x++)
		for(y=1;y<=33;y++)
			if(5*x+3*y+(100-x-y)*1.0/3==100)
			{
			
				printf("the cock  number is:%d\n",x);
				printf("the hen   number is:%d\n",y);
				printf("the chick number is:%d\n\n",100-x-y);
			}
			return 0;
}