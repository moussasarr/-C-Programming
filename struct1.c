#include <stdio.h>

int main()
{
    struct record {
        int account;
        float balance;
    };

    struct record my_bank;
    my_bank.account = 66331;
    my_bank.balance = 2600000000;

    printf("In account %d I have a balance of $%.2f", my_bank.account, my_bank.balance);
    return(0);
}
