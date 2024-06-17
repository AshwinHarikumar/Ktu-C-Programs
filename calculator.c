#include<stdio.h>
#include<math.h>
void main()
{
   int a,b,ch;
   printf("+=1,-=2,*=3,/=4");
   printf("enter the choice (1-4);");
   scanf("%d",&ch);
   printf("enter the numbers");
   scanf("%d%d",&a,&b);
   switch (ch)
   {
       case 1 : 
       printf("sum is %d",a+b);
       break;
       case 2 : 
       printf("sum is %d",a-b);
         break;
       case 3 : 
       printf("pdt is %d",a*b);
         break;
       case 4 : 
       printf("quotient is %d",a/b);
         break;
       default: printf("invalid command");
   }
}
