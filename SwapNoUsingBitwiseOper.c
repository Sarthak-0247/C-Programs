//W.A.P swap two no. using bitwise operator.

#include<stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before swaping First variable = %d\n Second variable = %d\n", a, b);
    int i=0;
    do {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        i++;
    } while (i < 1);
    printf("After Swapping\n First variabe = %d\n Second variable = %d\n", a, b);
    return 0;
}