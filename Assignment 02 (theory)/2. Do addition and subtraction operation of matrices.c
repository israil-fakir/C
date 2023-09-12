#include<stdio.h>
int r,c,j,i;
void sum(int [20][20],int [20][20]);
void sub(int [20][20],int [20][20]);
int main()
{
    int i,j,arr[20][20],brr[20][20];
    printf("Enter the same matrix (same row and columns)\n");
    printf("Enter the row and columns number :\n");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements for 1st matrix on %d and %d : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered 1st matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements for 2nd matrix on %d and %d : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    printf("Entered 2nd matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",brr[i][j]);
        }
        printf("\n");
    }
    sum(arr,brr);
    sub(arr,brr);
    return 0;
}

void sum(int arr[20][20],int brr[20][20])
{

    printf("Addition:\n");
    int crr[r][c];
    for(int i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         crr[i][j]=arr[i][j]+brr[i][j];
         printf("%4d",crr[i][j]);
        }
        printf("\n");
    }
}
void sub(int arr[20][20],int brr[20][20])
{
    printf("Subtraction :\n");
    int drr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            drr[i][j]=arr[i][j]-brr[i][j];
            printf("%4d",drr[i][j]);
        }
        printf("\n");
    }
}
