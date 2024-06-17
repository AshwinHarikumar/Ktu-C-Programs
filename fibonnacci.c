#include<stdio.h>
void main()
{
   int a=0,b=1,next,n;
   printf("enter the number of terms");
   scanf("%d",&n);
   
   for(int i=0;i<n;i++)
   {
   if(i<=1)
       {
           next=i;
       }
   else
      {
       next=a+b;
       a=b;
       b=next;
      }
      printf("%d\t",next);
   }
   
}