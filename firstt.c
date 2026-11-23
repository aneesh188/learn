#include <stdio.h>

int add(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

int main(void)
{
    int firstNumber;
    int secondNumber;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &firstNumber, &secondNumber) != 2)
    {
        fprintf(stderr, "Please enter two valid integers.\n");
        return 1;
    }

    printf("Sum: %d\n", add(firstNumber, secondNumber));
    return 0;
}