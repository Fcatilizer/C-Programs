#include <stdio.h>
int main(){
    float p,r,t, si;

    printf("Enter the principle amount: ");
    scanf("%f", &p);
    printf("\nEnter the rate of interest: ");
    scanf("%f", &r);
    printf("\nEnter the amount of time: ");
    scanf("%f", &t);

    si = (p * r * t)/100;

    printf("Simple Interest is: (%f * %f * %f)/100 = %f \n", p, r, t, si);
    return 0;
}