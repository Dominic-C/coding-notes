#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *buffer[20];

    puts("Please enter your name: ");
    *buffer = malloc(sizeof(char)*20); // forgot to check for NULL
    fgets(*buffer, sizeof(char)*20, stdin);

    printf("Good morning %s!\n",*buffer);
    return 0;

}