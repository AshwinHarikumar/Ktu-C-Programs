#include<stdio.h>
void main()
{
    int a,b,*p,*q,temp;
    printf("enter the number a : ");
    scanf("%d",&a);
    printf("enter the number b : ");
    scanf("%d",&b);
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("a=%d && b=%d",a,b);
}
