#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int compare(const void *a, const void *b);

int main()
{   
    int numbers[SIZE];
    puts("Unsorted array:");
    srand((unsigned)time(NULL));
    for(int x = 0; x < 10; x++ )
    {
        numbers[x] = rand() % 100 + 1;
        printf("%d\t", numbers[x]);
    }
    putchar('\n');

    // qsort (memory address, size of array, size of each element, function)
    qsort(numbers, SIZE, sizeof(int), compare);

    puts("Sorted Array:");
    for(int x=0; x < SIZE; x++)
    {
        printf("%d\t",numbers[x]);
    }
    putchar('\n');
}

int compare(const void *a, const void *b) // const void just means there is no type definition
{
    return(*(int *)a - *(int *)b); // type cast to int pointer, dereference and return
}