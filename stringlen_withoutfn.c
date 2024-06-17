#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int len=0,i;
    printf("enter the string");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
        len=len+1;
    }
    printf("%d",len);
}