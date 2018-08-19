#include<stdio.h>

int holdarray ()
{
    static int array_x[] = {2,3,5,7,11};
    return array_x;
}

int main()
{
    int array[] = holdarray();
    for(int i =0; i<5 ; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}