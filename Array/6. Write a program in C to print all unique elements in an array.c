
#include<stdio.h>
int  main()
{
    int a[500],i,j,n,count=0;
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
    printf("\nUnique elements:");
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]!=a[j])
            printf("%3d",a[i]);
                break;
        }
    }
    return 0;
}
