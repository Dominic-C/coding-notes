#include <stdio.h>

int main()
{
    int a, b, larger;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("Enter another value: ");
    scanf("%d", &b);

/*     if(a > b)
        larger = a;
    else
        larger = b; */

    larger = (a > b) ? a : b; // uses less overhead, but less readable.

    printf("The larger value is %d\n", larger);
}