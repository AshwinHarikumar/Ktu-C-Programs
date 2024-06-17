#include<stdio.h>
void main()
{
    char str[20];
    int i,vowel=0,consonanat=0;
    printf("enter the string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            vowel++;
            
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        
        {
            consonanat++;
        }
    }

printf("%d\t%d\t",vowel,consonanat);

}