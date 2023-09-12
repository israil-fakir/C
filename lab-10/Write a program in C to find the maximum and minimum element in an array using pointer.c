#include<stdio.h>
int main()
{
    int a[10],n,i,*p,max,min;
    p=a;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    max=*p;
    min=*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
        }
        if(*(p+i)<min)
        {
            min=*(p+i);
        }
    }
    printf("Maximun =%d\nMinimum =%d",max,min);
    return 0;
}
