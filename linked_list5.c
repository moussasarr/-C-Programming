#include <stdio.h>
#include <stdlib.h>

struct stats {
    int account;
    float balance;
    struct stats *next;
};

struct stats *create(void);
void fill_structure(struct stats *s);

int main()
{
    struct stats *first;
    struct stats *current;
    struct stats *new;
    int a =1;

    //Create first structure
    first = create();
    current = first;
    int x;
    for(x=0;x<5;x++){
        if(x==0){
            first = create();
            current = first;
        }
        else{
            new = create();
            current->next = new;
            current = new;
        }
        fill_structure(current);
    }
    current ->next = NULL;

    current = first; //Resetting the current pointer

    // Printing the list of accounts

    while(current){
        printf("Account Number %05d:\t$%.2f\ne", current->account,
               current->balance);
               current = current->next;
    }


    return(0);
}

struct stats *create(void){
    struct stats *baby;
    baby = (struct stats *) malloc(sizeof(struct stats));
    if (baby == NULL){
        puts("System Error");
        exit(1);
    }
    return(baby);


};
void fill_structure(struct stats *s){
    printf("Enter account number: ");
    scanf("%d", &s->account);
    printf("Enter account balance: ");
    scanf("%f",&s->balance);
    s->next = NULL;


};

