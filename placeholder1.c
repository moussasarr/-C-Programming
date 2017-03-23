#include <stdio.h>

int main()
{
    float a,b;
    b=5.0;
    printf("Input a number: ");
    scanf("%f",&a);
    printf("%.3f/%.3f = %.3f\n",a,b,a/b);
    return(0);
}
