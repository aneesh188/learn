#include <stdio.h>

int subtract(int first, int second)
{
    return first - second;
}

int main(void)
{
    int first;
    int second;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &first, &second) != 2)
    {
        fprintf(stderr, "Please enter two valid integers.\n");
        return 1;
    }

    printf("Difference: %d\n", subtract(first, second));
    return 0;
}
