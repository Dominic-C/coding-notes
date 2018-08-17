#include <stdio.h>

void f(void)
{   
    int x = 0;
    printf("The value of x is %d\n", x);
    x++;
    printf("The value of x is %d\n", x);
}

void staticf(void)
{   
    static int k = 0;
    printf("The value of k is %d\n", k);
    k++;
    printf("The value of k is %d\n", k);
}

int main()
{
    f();
    f();

    staticf();
    staticf();

    return 0;
}