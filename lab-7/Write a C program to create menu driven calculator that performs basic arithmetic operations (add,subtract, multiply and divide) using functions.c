#include <stdio.h>
void main() {
    int num1,num2,op;
    printf("Enter the first integer number :");
    scanf("%d",&num1);
    printf("Enter the second integer number :");
    scanf("%d",&num2);
    printf("\nInput your option :\n");
    printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
    scanf("%d",&op);
    switch(op) {
      case 1:
        printf("The Addition : %d",num1+num2);
        break;
      case 2:
        printf("The Subtraction :%d",num1-num2);
        break;
      case 3:
        printf("The Multiplication :%d",num1*num2);
        break;
      case 4:
        if(num2==0)
        {
          printf("The second integer is zero. Divide by zero.\n");
        }
        else
        {
          printf("The Division :%d\n",num1/num2);
        }
        break;
      case 5:
        break;
      default:
        printf("Input correct option\n");
        break;
    }
}

