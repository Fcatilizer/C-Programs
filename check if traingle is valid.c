#include <stdio.h>
int main(){
    int side1, side2, side3;

    printf("Enter the First side: ");
    scanf("%d", &side1);
    printf("\nEnter the Second Side: ");
    scanf("%d", &side2);
    printf("\nEnter the Third Side: ");
    scanf("%d", &side3);
    
    if((side1 + side2) > side3){
        if((side2 + side3) > side1){
            if((side3 + side1) > side2){
                printf("Traingle is Valid.");
            }
            else{
                printf("Triangle is not Valid.");
            }
        }
        else{
            printf("Triangle is not valid");
        }
    }
    else{
        printf("Triangle is not Valid.");
    }
    return 0;
}