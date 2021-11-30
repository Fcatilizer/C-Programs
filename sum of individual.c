#include <stdio.h>
int main(){
    int m, n, sum = 0;

    printf("Enter the numbers:");
    scanf("%d", &n);

    for ( n; n > 0; n=n/10)
    {
        m = n % 10; 
        sum+=m;
    }
    printf("Sum is = %d \n", sum);

    return 0;
} 