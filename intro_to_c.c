#include <stdio.h>

int main(void)
{
    int firstNumber = 10;
    int secondNumber = 5;

    printf("Welcome to C programming!\n");
    printf("C programs use main() as their starting point.\n");
    printf("Variables store values, such as %d and %d.\n", firstNumber, secondNumber);
    printf("You can use printf() to display their sum: %d\n",
           firstNumber + secondNumber);

    return 0;
}
