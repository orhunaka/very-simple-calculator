#include <stdio.h>

float doAddition(number1, number2)
{
    return number1 + number2;
}

float doSubtraction(number1, number2)
{
    return number1 - number2;
}

float doMultiplication(number1, number2)
{
    return number1 * number2;
}

float doDivision(number1, number2)
{
    return number1 / number2;
}

float doPower(number1, number2)
{
    int loop;
    float sum = 1;

    if (number2 == 0)
    {
        return 1;
    }
    else if (number2 == 1)
    {
        return number1;
    }
    else
    {
        for (loop = 1; loop <= number2; loop++)
        {
            sum = sum * number1;
        }

        return sum;
    }
}

int main()
{
    float number1;
    float number2;

    char operand;

    float answer;

    printf("Enter the calculation:\n\n");
    scanf("%f %c %f", &number1, &operand, &number2);

    switch (operand)
    {
    case '+':
        answer = doAddition(number1, number2);
        break;

    case '-':
        answer = doSubtraction(number1, number2);
        break;

    case '*':
        answer = doMultiplication(number1, number2);
        break;

    case '/':
        answer = doDivision(number1, number2);
        break;

    case '^':
        answer = doPower(number1, number2);
        break;

        // case 's':
        //     answer = doSquareRoot(number2);
        //     break;

    default:
        printf("There is not a mathematical operand like that.");
        break;
    }

    printf("%f", answer);
}