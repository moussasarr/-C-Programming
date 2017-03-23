#include <stdio.h>

int main()
{
    //Let s fetch specific memory locations
    int a;
    char c;
    float f;

    puts("Memory Locations: ");
    printf("Integer variable a is at memory location %p\n",&a);
    printf("Character variable c is at memory location %p\n",&c);
    printf("Character variable f is at memory location %p\n",&f);
}
