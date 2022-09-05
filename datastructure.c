#include <stdio.h>
struct student{
    char StudentName [20];
    int Roll_No;
    float Totalmarks;
}s[3];

int main()
{
    int i;
    //DATA STORING
    for(i=0; i<3; i++){
        printf("Enter Name: ");
        scanf("%s", s[i].StudentName);
        printf("Enter Roll_No: ");
        scanf("%d", &s[i].Roll_No);
        printf("Enter Marks: ");
        scanf("%f", &s[i].Totalmarks); 
    }
    //DISPLAY DATA
    for (i=0; i<33; i++){
        if(s[i].Totalmarks>=75){
            printf("Student Name: %s\n Roll_No: %d\n Marks: %f\n", s[i].StudentName, s[i].Roll_No, s[i].Totalmarks);
        }
    }

    return 0;
}
