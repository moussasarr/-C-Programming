#include <stdio.h>

int main()
{
    char a;
    puts("Vacation Options:");
    puts("A- Airfare");
    puts("B- Hotel");
    puts("C- Rental car");
    printf("\n");

    scanf("%c",&a);

    switch(a)
    {
        case 'A':
        case 'a':
            puts("You have selected Airfare");
            break;
        case 'B':
        case 'b':
            puts("You have selected Hotel");
        break;
        case 'C':
        case 'c':
            puts("You have selected car Rental");
            break;
        default:
            puts("You entered an invalid optionbv");
    }
}
