#include <stdio.h>
int main(){
    int num, r;
    printf("Enter an integer: \n");
    scanf("%d", &num);

    r = num % 2 == 0;

    switch (r)
    {
    case 1:
        printf("\n%d is even. \n", num); 
        break;
    
    default:
        printf("\n%d is not even. \n", num);
        break;
    }
    
    return 0;
}