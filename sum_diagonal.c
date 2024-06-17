#include<stdio.h>
void main()
{
    int a[20][20],sum=0,i,j,row,column;
    printf("enter the no of rows and columns");
    scanf("%d%d",&row,&column);
    printf("enter the elements of the matrix 1");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("the sum of diagonal elements  is \n");
     printf("%d",sum);
}
