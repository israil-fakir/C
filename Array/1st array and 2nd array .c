#include<stdio.h>
int main()
{       // 1st array
    int n,i,j,a1[30][30];
    printf("Enter the square matrix for two same array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter the elements for 1st array - (%d,%d) :",i,j);
            scanf("%d",&a1[i][j]);
        }
    }
        //1st array sum
    printf("\nThe 1st matrix %d by %d :\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",a1[i][j]);
        }
    printf("\n");
    }
        // 2nd array
    int a2[30][30];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the elements for 2nd array - (%d,%d) :",i,j);
            scanf("%d",&a2[i][j]);
        }
    }
    printf("\nThe 2nd matrix %d by %d :\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",a2[i][j]);
        }
    printf("\n"); // 2nd array
    }
    // 3rd array
    int a3[30][30],sum=0;
    printf("The sum of the array 1 and array 2:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];// sum =1st and 2nd array
            printf("%4d",a3[i][j]);
        }
        printf("\n"); //print sum using with 3rd arry
    }
    return 0;
}
