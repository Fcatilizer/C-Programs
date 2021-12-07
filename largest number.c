#include <stdio.h>
int main(){
    int i, j, k;

    printf("Enter your first number: ");
    scanf("%d", &i);
    printf("\nEnter the second number: ");
    scanf("%d", &j);
    printf("\nEnter your third number: ");
    scanf("%d", &k);

    if (i>j && i>k)
    {
        printf("This is the largest number: %d", i);
    }
    else if (j>i && j>k)
    {
        printf("This is the largest number: %d", j);
    }

    else if (k>i && k>j)
    {
        printf("\nThis is the largest number: %d", k);
    }
    else
    {
        printf("All the numbers are at qual value");
    }

    return 0;
}