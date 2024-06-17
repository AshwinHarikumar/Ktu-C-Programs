#include<stdio.h>
void main()
{
   int num,rem,rev=0,temp;
   printf("enter the number");
   scanf("%d",&num);
   temp=num;
   while(num!=0)
   {
      rem=num%10;
      rev=rev*10+rem;
      num=num/10;
   }
   printf("%d\n",rev);

   if(rev==temp)
   {
       printf("number is a palindrome");
   }
   else
   {
       printf("number not a palindrome");
   }
}