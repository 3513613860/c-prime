#include<stdio.h>
int main()
{
	void wu(int x);
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i=0;i<10;i++)
		wu(a[i]);
	return 0;
}
void wu(int x)
{
	if(x>5)
		printf("1\n");
	else
		printf("0\n");
}