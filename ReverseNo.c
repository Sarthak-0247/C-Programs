#include<stdio.h>

int main() {
    int n, reverse_no=0, remainder;
    printf("Enter the number: ");
    scanf("%d", &n);

    while(n!=0) {
        remainder=n%10;
        reverse_no=reverse_no*10+remainder;
        n/=10;
    }
    printf("reverse_no = %d", reverse_no);
    return 0;
}