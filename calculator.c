#include<stdio.h>
int main()
{
    float num1,num2,result;
    char op;
    printf("Enter the first number : ");
    scanf("%f", &num1);
    printf("Choose the operator ( + , - , x , / ) : " );
    scanf(" %c", &op);
    printf("Enter the second number : ");
    scanf("%f", &num2);

    switch(op)
    {
    case '+':
        result = num1 + num2;
        printf("%f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("%f", result);
        break;
    case 'x':
        result = num1 * num2;
        printf("%f", result);
        break;
    case '/':
        result = num1 / num2;
        printf("%f", result);
        break;
    
    default:
        printf("the operator is invalid");
        break;
    }
    return 0;
}