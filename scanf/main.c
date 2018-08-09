#include <stdio.h>
// getting and outputting characters
int main()
{
    int x;
    printf("Type an integer: ");
    // scanf passes the input to the memory address of an existing variable. Note the variable types have to be consistent.
    scanf("%d", &x); // & not required for arrays
    printf("Integer %d received.\n", x);
    return 0;
}