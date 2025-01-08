# include<stdio.h>

int main() {
    int i, fact = 1, num;
    printf("Enter the number of factorial : ");
    scanf("%d", &i);

    // for(i=1; i<=num; i++) {
    //     fact=fact*i;
    // }
    // printf("Factorial of %d is : %d", num, fact);
    while(i > 1) {
        fact = fact * i;
        i--;
    }
    printf("Factorial is: %d", fact);
    return 0;
}