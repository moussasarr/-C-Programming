#include <stdio.h>
#include <string.h>

int main()
{
    char password[8];
    int compare;
    printf("Enter your password here: ");
    scanf("%8s",password);
    compare = strcmp(password,"secret");
    if(compare == 0)
        puts("You have been granted access");
    else
        puts("Alert!! Intruder");
}
