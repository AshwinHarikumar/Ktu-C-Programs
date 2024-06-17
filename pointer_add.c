#include<stdio.h>
void main()
{
    int a,b,sum;
    printf("enter the number a : ");
    scanf("%d",&a);
    printf("enter the number b : ");
    scanf("%d",&b);
    int *p=&a;
    int *q=&b;
    sum=*p+*q;
    printf("%d is the sum ",sum);
}