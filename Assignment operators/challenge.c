#include <stdio.h>

int main()
{
    int x;
    printf("Please enter a value: ");
    scanf("%d", &x);

    x *= 5;
    printf("Value multiplied by 5 is: %d\n", x);

    x /= 3;
    printf("Value divided by 3 is %d\n", x);
    return 0;
}