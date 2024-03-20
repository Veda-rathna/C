#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of column:");
    scanf("%d",&c);
    
    printf("Enter the elements of the first matrix:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
    printf("Enter the matrix a%d%d:",i + 1,j + 1);
    scanf("%d",&a[i][j]);
    }

    printf("Enter the elements of the second matrix:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
    printf("Enter the matrix b%d%d:",i + 1,j + 1);
    scanf("%d",&b[i][j]);
    }

    printf("The multiplied matrix is:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        mul[i][j]=0;
        for(k=0;k<c;k++)
        mul[i][j] += a[i][k] * b[k][j];
    }

    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        printf("%d  ",mul[i][j]);
    }
    printf("\n");
    }

}