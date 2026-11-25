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

    if (number % 2 == 0)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }

    return 0;
}
