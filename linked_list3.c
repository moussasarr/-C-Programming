#include <stdio.h>
#include <stdlib.h>


//Linked List structure is defined globally
struct stats {
    int account;
    float balance;
    struct stats *next;
};

struct stats *create(void);

int main()
{
    struct stats *first;
    struct stats *current;
    struct stats *new;
    int a = 1;
    first = create();
    puts("First List Node Created");
    return(0);
}



struct stats *create(void){
    struct stats *baby;
    baby = (struct stats *) malloc(sizeof(struct stats));
    if( baby == NULL){
        puts("Memory Error");
        exit(1);
    }
    return(baby);
};
