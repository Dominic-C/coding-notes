#include <stdio.h>

int main()
{
    int a, b;
    float c;
    float d;

    a = 10; b = 3;
    c = (float)a/b;
    // integer manipulation is faster and there is no precision error.
    // thus, if i need to fetch a value only once, use typecasting
    printf("%d/%d = %.2f\n", a, b, c);

    d = a/b;
    printf("without typecasting, %d/%d = %.2f\n", a, b, d);
    return 0;
}