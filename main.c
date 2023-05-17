#include <stdio.h>
#include <math.h>

int main()
{
    double base, exponent, result;

    /* base */
    printf("base: ");
    scanf("%lf", &base);

    /* exponent */
    printf("exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);
    printf("result is %.2lf\n", result);
}
