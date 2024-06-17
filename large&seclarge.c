#include<stdio.h>
void main()
{
    int a[20],i,n,large=0,seclarge=0;
    printf("enter the number of elements of the array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            seclarge=large;
            large=a[i];
            
        }
        else if(a[i]>seclarge)
        
        {
            seclarge=a[i];
        }
    }
    printf("%d\t%d\t",seclarge,large);
}
