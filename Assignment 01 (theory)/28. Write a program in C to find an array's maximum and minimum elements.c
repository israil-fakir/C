#include<stdio.h>
int main()
{
    int arr[100],i,size;
     int max,min;
    printf("Enter of size array:");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<size;i++)
    {
        if(max<arr[i])
        {
           max=arr[i];
        }
       if(min>arr[i])
       {
           min=arr[i];
       }
    }

    printf("Max value :%d\n",max);
    printf("Min value :%d",min);
    return 0;
}
