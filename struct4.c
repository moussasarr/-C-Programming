#include <stdio.h>

int main()
{
    struct date {
        int day;
        int month;
        int year;
    };

    struct person {
        char name[32];
        struct date birthday;
    };

    struct person friend;
    strcpy(friend.name,"Brian");
    friend.birthday.day = 28;
    friend.birthday.month = 2;
    friend.birthday.year = 1970;

    printf(" My friend %s was born on %d %d %d \n", friend.name, friend.birthday.month,
           friend.birthday.day, friend.birthday.year);

}
