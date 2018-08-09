#include <stdlib.h>
#include <stdio.h>

#define SIZE 64 // buffer size

int main()
{
    char *name; // create a pointer

    name = malloc(sizeof(char) * SIZE);
    if (name == NULL) // if insufficient memory
    {
        puts("Unable to allocate memory\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, SIZE, stdin); // to get user input
    printf("Nice to meet you, %s", name); // printf %s applied to a pointer to get the string from pointer.
    return 0;

}