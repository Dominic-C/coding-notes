#include<stdio.h>

int main()
{
    int array_a[] = {1,3,45,5,2,1};

    puts("Unsorted array");
    int array_len = sizeof(array_a)/sizeof(array_a[0]);
    for(int i=0; i < array_len; i++)
    {
        printf("%d\t", array_a[i]);
    }
    putchar('\n');

    // bubblesort
    int temp, n;
    int inner;
    for(n = 0; n < array_len; n++)
    { // n passes
        for(inner = n+1; inner < array_len; inner++)
        {   
            printf("comparing %d from outer with %d from inner\n", array_a[n], array_a[inner]);
            if(array_a[n] > array_a[inner])
            {
                temp = array_a[inner];
                array_a[inner] = array_a[n];
                array_a[n] = temp;
                printf("\nswapped %d and %d\n\n", array_a[n], array_a[inner]);
            }
        }
    }

    // bubble sort
    // int temp, outer, inner;
    // for (outer =0; outer < array_len ; outer++)
    // {
    //     for (inner = outer + 1; inner < array_len; inner++)
    //     {
    //         printf("comparing %d from outer with %d from inner\n", array_a[outer], array_a[inner]);
    //         if(array_a[outer] > array_a[inner])
    //         {
    //             temp = array_a[inner];
    //             array_a[inner] = array_a[outer];
    //             array_a[outer] = temp;
    //         }
    //     }
    // }

    puts("sorted array");
    for(int i=0; i < array_len; i++)
    {
        printf("%d\t", array_a[i]);
    }
    putchar('\n');
    return 0;
}