#include<stdio.h>
void main()
{
    int a[20][20],b[20][30],c[20][20],row1,row2,column1,column2,i,j,k;
    //matrix1
    printf("enter no of rows and columns");
    scanf("%d%d",&row1,&column1);
    printf("enter the elemnts ");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    //matrix 2
    printf("enter no of rows and columns");
    scanf("%d%d",&row2,&column2);
    printf("enter the elemnts of matrix 2:");
    for(i=0;i<row2;i++)
    {
    for(j=0;j<column2;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    //intiliase c matrix
    for(i=0;i<row1;i++)
    {
    for(j=0;j<column2;j++)
    {
      c[i][j]=0;
    }
    }
    //mutiplication
     for(i=0;i<row1;i++)
    {
    for(j=0;j<column2;j++)
    {
        for(k=0;k<column1;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
    }
    //multiplication print 
     for(i=0;i<row1;i++)
    {
    for(j=0;j<column2;j++)
    {
        printf("\t%d",c[i][j]);
    }
    printf("\n");
    }
}
