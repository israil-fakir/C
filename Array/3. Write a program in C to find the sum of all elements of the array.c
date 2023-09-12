#include<stdio.h>
int main()
{
    int i,n,a[500],sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements :");
        scanf("%d",&a[i]);
    }
    printf("Entered array:");
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }

    for(i=0;i<n;i++)

    {
        sum=sum+a[i];
    }
   printf("\nEntered array elements sum = %d",sum);
    return 0;
}
