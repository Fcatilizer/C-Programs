#include <stdio.h>
int main (){
    int low, high, i, j;
    printf("Enter the number: ");
    scanf("%d", &high);

    low = 1;

   while (low < high) {
      j = 0;

      // ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
      }

      // if low is a non-prime number, j will be 1
      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            j = 1;
            break;
         }
      }

      if (j == 0)
         printf("%d ", low);

      // to check prime for the next number
      // increase low by 1
      ++low;
   }

   return 0;
}