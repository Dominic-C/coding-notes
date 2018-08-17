#include <stdio.h>

int main()
{
    int x;
    printf("Please enter an integer: ");
    scanf("%d", &x);

    printf("The result printed as a floating point is %.1f\n", (float)x);

    return 0;
}