#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main()
{
    char * sto;

    sto = malloc(sizeof(char)*SIZE);
    if (sto == NULL)
    {
        printf("Error allocating memory\n");
        return 1;
    }

    else
    printf("Memory allocated at %p\n", sto);
    return 0;
}