#include<stdio.h>
int main()
{
    int a[30][30],b[30][30],i,j,r,c,sum=0;
    printf("Enter the matrix row and columns :\n");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("Enter the elements:");
                scanf("%d",&a[i][j]);
                if(i==j)
                    sum=sum+a[i][j];
            }
        }
        printf("The matrix is:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
        printf("The diagonals = %d",sum);
    }
    else
    {
        printf("Errors !!!@");
    }
    return 0;
}
