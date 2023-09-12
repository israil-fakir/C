#include<stdio.h>
int main()
{
    int i,n,a[100];
    printf("Enter the size of Array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&a[i]);

    }
    printf("Entered Array:");
    for(i=0;i<n;i++)
        {
            printf("%2d",a[i]);
        }
    printf("\nReverse Array :");
    for(i=n;i>0;i--)
    {
        printf("%2d",a[i]);
    }
    return 0;
}
