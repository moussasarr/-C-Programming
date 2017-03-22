#include <stdio.h>
#include <string.h>

int main()
{
    char first[] ="I would like to go ";
    char second[] ="from here to there \n";
    char storage[128];
    strcpy(storage,first);
    strcpy(storage,second);
    printf("Here is your string: \n %s", storage);
    return(0);
}
