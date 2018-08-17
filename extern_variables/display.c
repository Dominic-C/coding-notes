#include <stdio.h>
void displayData(); // if you have "warning - implicit declaration of function displayData()". it's because you forgot this line
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