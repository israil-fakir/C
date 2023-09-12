#include<stdio.h>
int main()
{
    int n,i,a[500];
    printf("Enter the size of array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Elements %d :",i);
        scanf("%d",&a[i]);
    }
    printf("The array :");
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}
