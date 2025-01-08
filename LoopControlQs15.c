// Print the sum of first n natural numbers.
//n = 4

#include<stdio.h>

int main() {
    int i=1, sum=0;

    do{
        sum = sum + i;
        i++;
    } while(i <= 10);
    printf("sum of first 10 natural numbers is %d\n", sum);
    return 0;

}