#include <stdio.h>
#include <math.h>

void factorial(int);

int main(){
    int i;
    printf("Enter the number :" );
    scanf("%d", &i);
    factorial(i);
    return 0;
    }
void factorial(int i){
    int fact = 1, j;
    for(j = 1 ; j <= i ; j++){
        fact = fact * j;
        
}
    printf("The factorial of %d is %d", i, fact);
}