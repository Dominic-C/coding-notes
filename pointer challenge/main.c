#include <stdio.h>

int main()
{
    char a, b, c;
    char *p;

    a = 'A';
    p = &a;
    b = *p;

    p = &c;
    *p = 'Z';

    printf("a: %c, b: %c, c: %c\n", a, b, c);

    return 0;
}