#include <stdio.h>
int main(){
    int side1, side2, side3;

    printf("Enter the first side of traingle:");
    scanf("%d", &side1);
    printf("\nEnter the second side of traingle:");
    scanf("%d", &side2);
    printf("\nEnter the third side of traingle:");
    scanf("%d", &side3);

    if ( ((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side3 + side1) > side2) ){
        printf("The given traingle is valid!");
    }
    else {
        printf("The given traingle is not valid!");
    }

    return 0;
}