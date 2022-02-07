#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool errorMessage()
{
    printf("\n");
    printf("This calculator only supports the following operators: \n");
    printf("+ (addition)\n");
    printf("- (subtraction)\n");
    printf("* (multiplication)\n");
    printf("/ (division)\n");
    return false;
}

double calculate(char operator, double num1, double num2)
{
    switch (operator)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else
        {
            printf("\nYou cannot divide by zero.\n");
            return false;
        }
    default:
        errorMessage();
    }
}

int main()
{
    double num1;
    double num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator: ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    double result = calculate(operator, num1, num2);

    if (result != false)
    {
        printf("\nYour answer is: %f\n", result);
    }

    return 0;
}