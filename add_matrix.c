#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],c[20][20],i,j,row,column;
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
    printf("enter the elements of the matrix 2");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the result is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
