#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character");
    scanf(" %c",&ch);
    if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    {
        printf("the character is a vowel");
    }
    else if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("the character is a consonant");
    }
    else 
    {
        printf("the character is invalid");
    }
}