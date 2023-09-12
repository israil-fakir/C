#include<stdio.h>
int main()
{
    int arr[100],i,j,count=0,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[j]==arr[i])
            {
            count++;
            break;
            }
        }
    }
    printf("Duplicate element : %d",count);
    return 0;
}
