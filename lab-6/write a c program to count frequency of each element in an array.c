#include <stdio.h>
int main()
{
    int arr1[100], arr2[100];
    int n, i, j, ctr;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i] = -1;
    }
    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                arr2[j] = 0;
            }
        }

        if(arr2[i]!=0)
        {
            arr2[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(arr2[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], arr2[i]);
        }
    }
}
