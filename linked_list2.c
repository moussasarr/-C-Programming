#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct stats{
        int account;
        float balance;
        struct stats *next;
        };

    struct stats *first;
    int a=1;

    first = (struct stats *) malloc(sizeof(struct stats));
    if(first == NULL){
        puts("Memory Error!");
        return(1);
    }

    printf("Enter account number: ");
    scanf("%d",&first -> account);

    printf("Enter balance: $");
    scanf("%f", &first ->balance);

    printf("Account %d / $%f", first->account, first->balance);
    first -> next = (struct stats *) malloc(sizeof(struct stats));

    if(first->next == NULL){
        puts("Memory Error");
        return(1);
    }




    return(0);
}
