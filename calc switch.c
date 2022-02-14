#include <stdio.h>

int main(){
  double a , b;
  char op;
  printf("Select the operator : +,-,*,/ \n");
  scanf("%c", &op);
  printf("Enter the numbers :");
  scanf("%lf", &a);
  scanf("%lf", &b);

  switch(op){
    case '+' :
    printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
    break;
    case '-' :
    printf("%.1lf - %.1lf = %.1lf", a , b, a - b);
    break;
    case '*' :
    printf("%.1lf * %.1lf = %.1lf", a , b, a * b);
    break;
    case '/' :
    printf("%.1lf / %.1lf = %.1lf", a , b, a / b);
    break;
    default :
    printf("Not valid operator");        
  }
  printf("\n");
  return 0;
}