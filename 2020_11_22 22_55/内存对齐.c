#include<stdio.h>

struct S1
{
	double d; //8
	char c; //1
	int i; //3+4
}; //16

struct S2
{
	char c1;     //1
	struct S1 s1;//7+16
	char* arr[3];//12
	short* b;//4
	double d;//8
};//48

struct S3
{
	char c;    //1
	struct S1 s;//7+16
	char* a; //4
	char e[3];//3
	float* fp;//1+4
	float f;//4
	double d[3];//24
	struct S2 s2[2];//96
	char g;//1
};//+7    168

int main()
{
	printf("%d\n", sizeof(struct S1));  //16
	printf("%d\n", sizeof(struct S2));  //48
	printf("%d\n", sizeof(struct S3));  //168
	return 0;
}