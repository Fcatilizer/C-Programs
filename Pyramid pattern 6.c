#include <stdio.h>
int main(){
    int i, j, k=0, l;
    for ( i = 1; i <= 4; i++, k=0)
    {
        for ( j = 1; j <= 4-i; j++)
        {
            printf(" ");   
        }
        while (k != 2 * i - 1)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
    return 0; 
}