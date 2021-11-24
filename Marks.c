#include <stdio.h>
int main(){
    int P, C, B, M, CO;
    float per;
    //Taking Inputs or Marks of each subject.
    printf("Enter the marks of Physics :  ");
    scanf("%d", &P);
    printf("\nEnter marks of Chemistry : ");
    scanf("%d",&C);
    printf("\nEnter marks of Biology : ");
    scanf("%d",&B);
    printf("\nEnter marks of Mathematics : ");
    scanf("%d",&M);
    printf("\nEnter marks of Computer : ");
    scanf("%d",&CO);
    //Calculating the percentage and grade.
    per = (P + C + B + M + CO) / 5.0;
    printf("Percentage = %.2f\n", per);

    if(per >= 90)
    {
        printf("Grade A\n");
    }
    else if(per >= 80)
    {
        printf("Grade B\n");
    }
    else if(per >= 70)
    {
        printf("Grade C\n");
    }
    else if(per >= 60)
    {
        printf("Grade D\n");
    }
    else if(per >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Grade F\n");
    }
    
    return 0;
}