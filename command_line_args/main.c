#include <stdio.h>

int main (int argc, char *argv[])
{
    if(argc > 1)
        printf("%s\n", argv[1]);

    else
        printf("Enter at least one command line option!\n");

    return 0;
}