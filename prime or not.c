#include<stdio.h>
#include<math.h>
void main()
{
   int num,i,flag=0;
   printf("enter the number");
   scanf("%d",&num);
   if(num==2)
   {
       printf("prime");
   }
   else
   {
   for(i=2;i<=num/2;i++)
   {
       if(num%i==0)
       {
           flag=1;
           break;
       }
   }
   }
   if (flag==0)
   {
       printf("number is prime");
   }
   else
   {
       printf("number not a prime");
   }
}