#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],sum=0,i,j,row,column;
    printf("enter the no of rows and columns");
    scanf("%d%d",&row,&column);
    printf("enter the elements of the matrix 1");
    //read matrix 1
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //save matrix
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            b[i][j]=a[i][j];
        }
    }
    //transpose of a matrix
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    //transpose=original 
   
        
            if(a[i][j]==b[i][j])
            {
                printf("matrix is a symmetric");
            }
            else
            {
                printf("matrix is not symmetric");
            }
 }
