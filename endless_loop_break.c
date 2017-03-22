#include <stdio.h>

int main()
{
    int a;
    a= 1;
    while(1){
        printf("%d\n",a);
        if (a == 10){
            break;
        }
        a++;
    }
}
