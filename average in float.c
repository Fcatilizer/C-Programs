#include <stdio.h>
int main(){
    float a, b, c, avg;
    
    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter the second number:");
    scanf("%f", &b);

    printf("Enter the third number:");
    scanf("%f", c);

    avg = (a+b+c) / 3;

    printf("(%f + %f +%f)/3 = %f ", a, b, c, avg);

    return 0;
}