# include<stdio.h>

int main() {
    int n, sum=0;
    printf("Enter the number(0 to stop): \n");

    while(1) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if(n==0) {
            break;
    }
        if(n>0) {
        sum = sum + n;
        }
    }
    printf("Sum of positive number: %d\n", sum);
    return 0;
}
