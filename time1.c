#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;
    time(&now);
    printf("The current time is %s \n", ctime(&now));
    //From Unix Time starts on January 1 1970
    return(0);
}
