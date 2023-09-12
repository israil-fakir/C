#include <stdio.h>
int find_max(int arr[], int size)
{
    int i;
    int max = -1;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
   return max;
}
int find_min(int arr[], int size)
{
    int i;
    int min = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int i, total;
    printf("Enter total no of elements : ");
    scanf("%d", &total);
    int myArray[total];
    printf("Enter the elements: \n");
    for (i = 0; i < total; i++)
    {

        scanf("%d", &myArray[i]);
    }
    int maximumNo = find_max(myArray, total);
    int minimumNo = find_min(myArray, total);
    printf("Maximum number in the array is :%d \n", maximumNo);
    printf("Minimum number in the array is :%d \n", minimumNo);
}
