#include<stdio.h>
int fibonnacci(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else 
    {
        return(fibonnacci(n-1)+fibonnacci(n-2));
    }
}
void main()
{
    int a=0,b=1,n,m,i;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("fibonnacci series is\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fibonnacci(m));
                m++;
    }
}