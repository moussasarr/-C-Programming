#include <stdio.h>
int main()
{
    char row;
    int column;


    for(row='A';row<'Z'+1;row++){
        for(column =0; column<10;column++){
            printf("%c%d\t", row,column);
        }
    }
}
