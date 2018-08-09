#include <stdio.h>
// getting and outputting characters
int main()
{
    int c;

    printf("Type a letter: ");
    c = getchar();

    printf("prinft output: %c\n", c);

    printf("putchar output: ");
    putchar(c);
    putchar('\n');

    // character IO in c is stream oriented. The buffer has to be filled up before sending out the stream.
    return 0;
}