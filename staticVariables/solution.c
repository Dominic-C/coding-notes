#include<stdio.h>

int *holdarray ()
{
    static int array_x[] = {2,3,5,7,11};
    printf("array_x is a pointer located at: %p\n", array_x);
    return array_x; // an array isnt returned by a pointer, it's address is returned instead.
}

int main()
{
    int *array;
    array = holdarray(); // assign holdarray pointer to array pointer.
    for(int i =0; i<5 ; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}