#include <stdio.h>

// pointers are variables that hold a memory location
int main()
{
    // pointers need to be initialized before used
    int pokey;
    int *p;

    pokey = 987;
    p = &pokey;

    printf("the address of `pokey` is %p\n", &pokey);
    printf("the address of `p` is %p\n", p);

    printf("The value of `pokey` is %d\n", pokey);
    printf("The value of `p` is %d\n", *p);
    return 0;
}