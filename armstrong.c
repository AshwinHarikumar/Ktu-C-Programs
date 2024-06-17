#include<stdio.h>
void main()
{
   int num,rem,sum=0,temp;
   printf("enter the number");
   scanf("%d",&num);
   temp=num;
   while(num!=0)
   {
     rem=num%10;
     sum=sum+rem*rem*rem;
     num=num/10;
   }
   if(sum==temp)
   {
       printf("number is a armstrong");
   }
   else
   {
       printf("number not a armstrong");
   }
}