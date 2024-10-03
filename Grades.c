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
        if(M<=100 &&P<=100 &&C <= 100) {
            if(M+P >= 140) {
                printf("Congrats! you are eligible");
            } else {
                printf("Sorry! you are not eligible : M+P < 140.\n");
        }
    } else {
        printf("Sorry! you are not eligible :M+P+C < 100.\n");
    }
    } else {
        printf("Sorry ! you are not eligigile : Individual subject creiteria .\n");
    }
    return 0;
}
