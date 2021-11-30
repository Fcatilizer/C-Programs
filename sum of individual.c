#include <stdio.h>
int main(){
    int m, n, sum = 0;

    printf("Enter the numbers:");
    scanf("%d", &n);

    for ( m = n%10; n > 0; n=n/10)
    {
        sum=sum+m;
    }
    printf("Sum is = %d \n", sum);

    return 0;
}