#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char operator;
    double result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator== '+')
    {
        result = num1 + num2;
    }
    else if (operator== '-')
    {
        result = num1 - num2;
    }
    else if (operator== '*')
    {
        result = num1 * num2;
    }
    else if (operator== '/')
    {
        result = num1 / num2;
    }

    else
    {
        printf("This calculator only supports the following operators: \n");
        printf("+ (addition)\n");
        printf("- (subtraction)\n");
        printf("* (multiplication)\n");
        printf("/ (division)\n");
    }

    printf("\nYour answer is: %f\n", result);

    return 0;
}