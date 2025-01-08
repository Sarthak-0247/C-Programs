#include<stdio.h>

int main() {
    int deci_num, binary_num[32];
    int i=0;
    printf("Enter a decimal number: ");
    scanf("%d", &deci_num);

     while (deci_num > 0) {
        binary_num[i] = deci_num % 2;
        deci_num = deci_num / 2;
        i++;
    }
    printf("Binary number is: ");
    for(int j=i-1; j>=0; j--) {
        printf("%d", binary_num[j]);
    }
    return 0;
}