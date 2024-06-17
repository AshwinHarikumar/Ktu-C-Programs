#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],ch;
    int i, a,count=0;
    printf("enter the string");
    gets(str);
    printf("enter the occurance of the specific character");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]==ch)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}