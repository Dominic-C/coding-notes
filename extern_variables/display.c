#include <stdio.h>

extern int data[];

void displayData()
{
    int x;
    printf("Dataset:\n");
    for(x=0; x < 5; x++)
    {
        printf("%2d\t", data[x]);
    }
    putchar('\n');
}