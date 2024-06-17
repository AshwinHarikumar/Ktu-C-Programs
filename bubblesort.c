#include<stdio.h>
void main()
{
   int a[50],n,i,j,temp;
   printf("enter the number of terms ");
   scanf("%d",&n);
   printf("enter the  terms");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(int i=0;i<n-1;i++)
   {
   for(j=0;j<n-1-i;j++)
   {
    if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    
   }
   }
   printf("sorted array is :\n");
   for(int i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
}  
