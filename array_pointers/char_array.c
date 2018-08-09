#include <stdio.h>

int main()
{
    char *months[12] = 
    {
        "January",
        "Feb",
        "March",
        "April",
        "May",
        "June",
        "July",
        "Aug",
        "Sept",
        "oct",
        "Nov",
        "Dec"
    };

    int x;

    for (x = 0; x < 12; x++)
    {
        printf("%p\n", months[x]);
    }
    return 0;
}