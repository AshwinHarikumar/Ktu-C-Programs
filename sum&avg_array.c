#include<stdio.h>
void main()
{
    int a[20],i,n,sum=0;
    printf("enter the number of elements of the array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum of array is %d\n",sum);
    printf("the avg of array elements is %d",sum/n);
}