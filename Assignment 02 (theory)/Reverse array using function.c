#include<stdio.h>
void rev(int arr[100],int n)
{
    int i,tem;
    for(i=0;i<n/2;i++)
    {
        tem=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=tem;
    }
}
int main()
{
    int arr[100],i,size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    rev(arr,size);
    printf("The reversing array:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
