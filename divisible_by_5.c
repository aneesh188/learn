#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1)
    {
        fprintf(stderr, "Please enter a valid integer.\n");
        return 1;
    }

    if (number % 5 == 0)
    {
        printf("%d is divisible by 5.\n", number);
    }
    else
    {
        printf("%d is not divisible by 5.\n", number);
    }

    return 0;
}
