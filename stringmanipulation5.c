#include <stdio.h>
#include <string.h>

int main()
{
    char stringsource[] = "I am a stranger in stranger land ";
    char find_me[] = "strieiieiege";

    if(strstr(stringsource,find_me) == NULL)
        puts("String not found");
    else
        printf("String \"%s\" found in String \"%s\"\n", find_me,stringsource);


}
