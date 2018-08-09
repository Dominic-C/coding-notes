#include <stdio.h>

int main()
{
    float x;
    printf("Please enter a value: ");
    scanf("%f", &x);

    x *= 5;
    printf("Value multiplied by 5 is: %.1f\n", x);
    // %.1f limits the output to 1 decimal place

    x /= 3;
    printf("Value divided by 3 is %.1f\n", x);
    return 0;
}