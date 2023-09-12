#include<stdio.h>
int main()
{
    int b,e,p,c,m,total;
    float avg;
    printf("Enter your marks on Bangla:");
    scanf("%d",&b);
    printf("Enter your marks on English:");
    scanf("%d",&e);
    printf("Enter your marks on Physics:");
    scanf("%d",&p);
    printf("Enter your marks on chemistry:");
    scanf("%d",&c);
    printf("Enter your marks on Math:");
    scanf("%d",&m);
    total=b+e+p+c+m;
    printf("Total your marks all subject:%d",total);
    avg=(total/5);
    printf("\nAverage your marks:7444%f",avg);
    return 0;

}
