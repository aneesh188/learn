#include <stdio.h>

int main(void)
{
    double dividend;
    double divisor;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &dividend, &divisor) != 2)
    {
        fprintf(stderr, "Please enter two valid numbers.\n");
        return 1;
    }

    if (divisor == 0.0)
    {
        fprintf(stderr, "Cannot divide by zero.\n");
        return 1;
    }

    printf("Quotient: %g\n", dividend / divisor);
    return 0;
}
