#include <stdio.h>
int main(){
    int r;
    float pi, area;
    printf("Enter the radius: ");
    scanf("%d", &r);
    pi = 3.142857142857143;
    area= pi * (r * r);
    printf("Area of the circle is: %f * (%d * %d) = %.2f\n", pi, r, r, area);
    return 0;
}