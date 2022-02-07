#include <stdio.h>
#include <stdlib.h>

void errorMessage()
{
    printf("\n");
    printf("This calculator only supports the following operators: \n");
    printf("+ (addition)\n");
    printf("- (subtraction)\n");
    printf("* (multiplication)\n");
    printf("/ (division)\n");
}

double calculate(char operator, double num1, double num2)
{
    if (operator== '+')
    {
        return num1 + num2;
    }
    else if (operator== '-')
    {
        return num1 - num2;
    }
    else if (operator== '*')
    {
        return num1 * num2;
    }
    else if (operator== '/')
    {
        if (num2 == 0)
        {
            printf("YOU CANNOT DIVIDE BY 0.");
        }
        else
        {
            return num1 / num2;
        }
    }

    else
    {
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

    printf("\nYour answer is: %f\n", result);

    return 0;
}