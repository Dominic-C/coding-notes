#include <stdio.h>
#include <string.h>

int main()
{
    struct date 
    {
        int year;
        int month;
        int day;
    };

    struct person
    {
        char name[32];
        struct date birthday;
    };

    struct person friend;

    strcpy(friend.name, "Hewlett Packard");
    friend.birthday.year = 1997;
    friend.birthday.month = 6;
    friend.birthday.day = 30;

    printf("My friend %s was born on %d/%d/%d\n", friend.name, friend.birthday.day, friend.birthday.month, friend.birthday.year);
    return 0;
}