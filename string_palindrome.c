#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],temp,ori[50];
    int i,len,j,cmp;
    printf("enter the string");
    gets(str);
    len=strlen(str);
    strcpy(ori,str);
    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts (str);
    cmp=strcmp(ori,str);
    if (cmp==0)
    {
        printf("string is a palindrome");
    }
    else
    {
        printf("string not a palindrome");
    }
}
