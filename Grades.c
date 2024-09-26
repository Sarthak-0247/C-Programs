# include<stdio.h>

int main(){
    int M, P, C;
    printf("what is the marks in Maths");
    scanf("%d", &M);
    printf("What is the marks in Physics");
    scanf("%d", &P);
    printf("What is the marks in Chemistry");
    scanf("%d", &C);

    if(M >= 65 && P >= 55 && C >= 50) {
        if(M=P=C >= 100 || M+P >= 140) {
            printf("Congrats! you are eligible");
        } else("Sorry! you are not eligible");
    } else {
        ("Sorry! you are not eligible");
    }
    return 0;
}