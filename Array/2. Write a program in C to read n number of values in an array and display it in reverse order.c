#include<stdio.h>
int main()
{
    int n,i,a[500];
    printf("Enter the size of Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("Entered array:");
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    printf("\nReverse Array :");
    for(i=n-1;i>=0;i--)
    {
        printf("%3d",a[i]);
    }
    return 0;
}
