#include<stdio.h>
void main()
{
    int num,sum=0,i;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num)
    {
        printf("number is a perfect number");
    }
    else 
    {
        printf("number is not a perfect number");
    }
       
}