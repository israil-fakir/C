#include<stdio.h>
int main()
{
    int sum,number,count;
    count=1;sum=0;
    printf("Enter the value here:");
    do{
        scanf("%d",&number);
        sum=sum+number;
        count++;
    }while(count<=10);
    printf("Result=%d\n",sum);
    return 0;
}
