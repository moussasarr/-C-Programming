#include <stdio.h>

char *encrypt(char *input);

int main()
{

        char *instructions = "Deliver package to Berlin";
        printf("Here are your secret instructions:\n%s\n", encrypt(instructions));
        return(0);
}

char *encrypt(char *input){
    static char output[64];
    int x= 0;

    while(*input){
        if(isalpha(*input))
            output[x] = *input+1;
        else
            output[x] = *input;
        x++;
        input++;
    }
    return output;


}
