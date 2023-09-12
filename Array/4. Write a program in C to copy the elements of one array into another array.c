#include<stdio.h>
int main()
{
    int  i,n,a1[500],a2[500];
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&a1[i]);
    }
    printf("The 1st array :");
    for(i=0;i<n;i++)
    {
        printf("%3d",a1[i]);
    }
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
    }
    printf("\nThe 1st array copyed:");
    for(i=0;i<n;i++)
    {
        printf("%3d",a2[i]);
    }

    return 0;
}
