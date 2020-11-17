#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

void reverse(char* str)
{
    char* arr[10];
    char* ch;
    ch = strtok(str," ");
    int i = 0;
    while (ch != NULL)
    {
        arr[i++] = ch;
        ch = strtok(NULL, " ");
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%s ", arr[j]);
    }
}

int main()
{
    char arr[100] = "we are students.";
    reverse(arr);
    return 0;
}