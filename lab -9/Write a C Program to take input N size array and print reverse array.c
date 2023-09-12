#include<stdio.h>
struct pro
{
    int arr[500];
    int size;

};
struct pro var1,var2;
int main()
{
    int i;
    printf("Enter the size of array:");
    scanf("%d",&var1.size);
    for(i=0;i<var1.size;i++)
    {
        printf("Enter the Elements:");
        scanf("%d",&var2.arr[i]);
    }
    printf("Entered Array:");
    for(i=0;i<var1.size;i++)
    {
        printf("%3d",var2.arr[i]);
    }
    printf("\nReverse array :");
    for(i=var1.size-1;i>=0;i--)
    {
        printf("%3d",var2.arr[i]);
    }
    return 0;
}
