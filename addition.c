#include <stdio.h>
int main (){
    int a, b, sum;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("\nEnter the second number :");
    scanf("%d", &b);

    sum = a+b;

    printf("%d + %d = %d", a, b, sum);
    printf("\n");
    return 0;
}