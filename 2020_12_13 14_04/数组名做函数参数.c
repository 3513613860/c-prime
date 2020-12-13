#include<stdio.h>
int main()
{
	float average(float b[]);
    float a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("aver=%f\n",average(a));
	return 0;
}
float average(float b[])
{
	float sum=0,aver;
	int i;
	for(i=0;i<9;i++)
		sum=sum+b[i];
	aver=sum/10;
	return aver;
}