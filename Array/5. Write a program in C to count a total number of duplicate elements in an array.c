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
        printf("%2d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
                break;
        }
    }
    printf("\nTotal duplicate =%d",count);

    return 0;
}
