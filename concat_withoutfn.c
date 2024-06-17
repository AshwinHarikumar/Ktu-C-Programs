#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50],str3[50];
    int len1=0,i,len2=0;
    printf("enter the string");
    gets(str1);
     printf("enter the string");
    gets(str2);
    for (i=0;str1[i]!='\0';i++)
    {
        len1++;
    }
    for (i=0;str2[i]!='\0';i++)
    {
        len2++;
    }
    for (i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
    }
    for (i=0;str2[i]!='\0';i++)
    {
        str3[len1+i]=str2[i];
    }
printf("concatenated string \n");    
puts (str3);
  
}
