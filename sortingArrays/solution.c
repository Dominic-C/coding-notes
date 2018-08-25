#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char storage[SIZE];
    int outer, inner;
    int length, tmp;

    printf("Enter a string: ");
    // scanf("%s", storage);
    fgets(storage, SIZE, stdin); // array, number of elements, input type?

    length = strlen(storage);

    printf("You entered: %s\n", storage); // double check if input string is detected properly

    // bubble sort, using ASCII in terms of decimals to compare
    for(outer = 0; outer < length ; outer++)
    {
        for(inner = outer + 1; inner < length; inner++)
        {
            printf("Outer is %c, inner is %c\n", storage[outer], storage[inner]); // can be used to check if the comparison is done right
            if(storage[outer] > storage[inner]) // if front element is larger than later element, do a swap
            {
                printf("swapped %c (from position %d) and %c (from position %d)\n",storage[outer], outer, storage[inner], inner);
                tmp = storage[outer];
                storage[outer] = storage[inner];
                storage[inner] = tmp;
            }
        }
    }

    puts("\nSorted string:");
    // for(int i = 0; i < length ; i++)
    // {
    //     printf("%c",storage[i]);
    // }

    // instead of printing the string one character at a time. we can do the following
    printf("%s",storage);
    printf("\n");
    return 0;
}