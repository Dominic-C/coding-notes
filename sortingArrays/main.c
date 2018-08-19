#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
    int numbers[SIZE];
    int x, outer, inner, temp;

    // populate the array
    // The C library function void srand(unsigned int seed) seeds the random number generator used by the function rand.
    puts("Unsorted Array: "); // puts just has an endline character at the end of the line
    srand((unsigned)time(NULL));
    for (x = 0; x < SIZE; x++ )
    {
        numbers[x] = rand() % 100 + 1;
        printf("%d\t",numbers[x]);
    }
    printf("\n");

    // bubble sort
    for(outer=0; outer < SIZE; outer++)
    {   
        for(inner=outer+1; inner < SIZE; inner++)
        // think of this as comparing the current element in the array with
        // every other element of the array
        {
            if(numbers[outer] > numbers[inner])
            {
                temp = numbers[inner];
                numbers[inner] = numbers[outer];
                numbers[outer] = temp;
            }
        }
    }

    puts("Sorted Array: ");
    for (x=0; x < SIZE; x++)
    {
        printf("%d\t", numbers[x]);
    }
    printf("\n");

    return 0;
}