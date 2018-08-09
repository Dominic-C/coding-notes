#include <stdio.h>

int main()
{
    struct person 
    {
        char name[32];
        int age;
    };

    struct person president =
    {
        "Halimah yacob",
        60
    };

    printf("%s is %d years old\n", president.name, president.age);
    return 0;
}