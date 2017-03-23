#include <stdio.h>

int main()
{
    char names[5][9] =
    {
        "Fernando",
        "Moussa",
        "Brian",
        "Kakai",
        "Tendai"
    };
    int i;
    for(i=0;i<5;i++)
        puts(names[i]);


    return(0);
}
