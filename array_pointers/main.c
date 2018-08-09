#include <stdio.h>

int main()
{
    // basic example of using arrays
/*     int array[] = {11, 13, 15, 17};
    int x;

    for (x = 0; x < 4; x++)
    {
        printf("element %d: %d\n", x+1, array[x]);
    } */


    // using pointers to access arrays
    int array[] = {11,13,15,17};
    int x;
    int *aptr;

    aptr = array; // dont need &. can initialize pointer to array because arrays are referenced

    for(x=0; x<4; x++)
    {
        printf("element %d: %d\n", x+1, *aptr);
        aptr++;
    }

    // accessing individual elements of an array
    aptr = array; // initializes aptr to memory location of the first element of the array
    printf("first element of array is %d\n", *aptr);

    aptr = &array[1]; // initializing aptr to second element of array
    printf("second element of array is %d\n", *aptr);

    // so on and so forth..


    return 0;
}