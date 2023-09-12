#include<stdio.h>
int main()
{
    int a[30][30],b[30][30],i,j,r,c,rsum[30],csum[30];
    printf("Enter the row and columns:\n");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);

        }
    }
    printf("Entered matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    rsum[i]=0;
    for(j=0;j<r;j++)
    {
         rsum[i]=rsum[i]+a[i][j];
    }
    printf("Sum of row = %d \n",rsum);

    csum[j]=0;
    for(i=0;i<c;i++)
    {
        csum[j]=csum[j]+a[i][j];
    }
    printf("Sum of columns = %d ",csum);
    return 0;
}
