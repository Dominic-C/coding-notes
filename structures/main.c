#include <stdio.h>

int main()
{
    struct bank // members of structure can be structures or any data types
    {
        int account; // members
        float balance;
    };

    struct bank checking, savings; // checking is a struct variable of the bank type
    
    checking.account = 1234;
    checking.balance = 567.89;

    savings.account = 32313;
    savings.balance = 122.111;

    printf("Checking account %d has a balance of %f\n",
            checking.account,
            checking.balance);

    printf("Savings account %d has a balance of %f\n",
            savings.account,
            savings.balance);

    return 0;
}