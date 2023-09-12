#include<stdio.h>
int main()
{
    int a[30][30],i,j,r,c,b[30][30];
    printf("Enter the matrix row and columns:\n");
    scanf("%d%d",&r,&c);
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements for (%d x %d):",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    printf("The Transpose matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
                    b[j][i]=a[i][j];
    }
    for(j=0;j<r;j++)
    {
        for(i=0;i<c;i++)
        {
            printf("%4d",b[j][i]);
        }
        printf("\n");
    }

    return 0;
}
