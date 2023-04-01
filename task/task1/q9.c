#include<stdio.h>

void main()
{
    float num1,num2,result=0;
    char op;
    printf("Enter 1st number: ");
    scanf("%f",&num1);
    printf("Enter 2nd number: ");
    scanf("%f",&num2);
    printf("Enter the operation: ");
    scanf("%c",&op);

    switch(op)
    {
    case '+':
        result = num1+num2;
        break;

    case '-':
        result = num1-num2;
        break;

    case '*':
        result = num1*num2;
        break;

    case '/':
        result = num1/num2;
        break;

    default:
        printf("Enter a valid operator.\n");
        break;

    }

    printf("%f %c %f = %f",num1,op,num2,result);

}
