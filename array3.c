#include <stdio.h>
#define MEALS 3

int main()
{
    int calories[MEALS];
    int x;
    int total;
    total = 0;

    puts("Calorie counter");
    for(x=0; x< MEALS; x++)
    {
        printf("Calories at meals %d:  ", x+1);
        scanf("%d", calories[x]);
        total = total + calories[x];
    }

    printf("Your total calorie intake for the 3 meals is: %d \n", total);
    return(0);

}
