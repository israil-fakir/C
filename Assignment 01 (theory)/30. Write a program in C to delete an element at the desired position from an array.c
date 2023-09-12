#include<stdio.h>
int main()
{
    int a[100],i,n,pos;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    printf("Deleted Position:\n");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("New array we get is:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}
