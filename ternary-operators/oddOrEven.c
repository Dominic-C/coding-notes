#include <stdio.h>

int main ()
{
    int x;
    printf("Enter a number greater than 0: ");
    scanf("%d", &x);
    printf("number received: %d\n", x);
    printf("The number is %s\n", (x%2 == 0) ? "even" : "odd" );
    return 0;
}