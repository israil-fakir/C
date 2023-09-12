#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a the X coordinate value:");
    scanf("%d",&x);
    printf("Enter a the Y coordinate value:");
    scanf("%d",&y);
    if((x>0) && (y>0))
        printf("First quandrant");
    else if((x<0) && (y>0))
        printf("Second quandrant");
    else if ((x<0) && (y<0))
        printf("Third quandrant");
    else if ((x>0) &&(y<0))
        printf("Fourth quandrant");
    return 0;
}
