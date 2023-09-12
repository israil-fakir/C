#include<stdio.h>
int main()
{
    int i,arr[100],sum=0,size;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
        sum=sum+arr[i];
    printf("Sum of array=%d",sum);
    return 0;
}
