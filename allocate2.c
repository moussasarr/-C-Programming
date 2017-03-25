#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main()
{
    char *sto;
    sto = (char *) malloc(sizeof(char)*1024);
    if(sto == NULL){
        puts("Memory Error \n");
        return(1);
    }
    else{
        printf("%d bytes of memory allocated starting at address %p\n",SIZE,sto);
        printf("Type your input here: ");
        fgets(sto,SIZE,stdin);
        printf("Here is what you type: \n");
        puts(sto);
    }
    return(0);
}
