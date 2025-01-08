// W.A.P find the largest digit of a number but process the digit in reverse order.

#include<stdio.h>

int main() {
    int n, digit, larg_no=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    do{
        digit = n % 10;
        if(digit > larg_no) {
            larg_no = digit;
        }
        n = n/10;
    } while(n != 0);
    printf("The largest digit is %d\n", larg_no);
    return 0;
}