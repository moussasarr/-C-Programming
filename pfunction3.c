#include <stdio.h>
void shouting(char *input);

int main()
{
    char string[64];
    printf("Type some text:\n");
    fgets(string,64,stdin);
    printf("You typed: \n%s\n",string);
    shouting(string);
    printf("If you were shouting you 'd typed:\n%s\n", string);
    return(0);
}

void shouting(char *input){
   while(*input){
    *input = toupper(*input);
    input++;
   }


}
