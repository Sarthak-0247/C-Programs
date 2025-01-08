// Write a program to check if student passed or failed.
// marks > 30 is pass
// marks <=30 is fail

# include<stdio.h>

int main() {
    int marks;
    printf("enter number(0-100) : ");
    scanf("%d", &marks);

    // if(marks >= 0 && marks <= 30) {
    //     printf("FAIL \n");
    // } else if(marks > 30 && marks <= 100) {
    //     printf("PASS \n");
    // } else {
    //     printf("wrong marks");
    // }
    

    // Ternary Operator 
    marks <= 30 ? printf("FAIL \n") : printf("PASS \n");

    return 0;
}