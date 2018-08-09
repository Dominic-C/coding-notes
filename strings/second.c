#include <stdio.h>

int main()
{
    // strings are char arrays in c
    // char arrays square brackets are empty if immediately assigned
    char name[15];
    printf("Enter character name: ");
    scanf("%s", name); // NOTE: putting an input message in scanf does not work.. it gives us weird results.
    // scanf function stops reading text at the first whitespace.
    printf("Character name: %s\n", name);

    return 0;
}