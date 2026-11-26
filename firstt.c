#include <stdio.h>

int add(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

int main(void)
{
    int firstNumber;
    int secondNumber;

    printf("Enter the first number: ");
    if (scanf("%d", &firstNumber) != 1)
    {
        fprintf(stderr, "Please enter a valid integer.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &secondNumber) != 1)
    {
        fprintf(stderr, "Please enter a valid integer.\n");
        return 1;
    }

    printf("%d + %d = %d\n", firstNumber, secondNumber,
           add(firstNumber, secondNumber));
    return 0;
}