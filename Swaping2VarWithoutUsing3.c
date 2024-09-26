# include<stdio.h>

int main() {
    int a, b;
    printf("Enter two integers \n");
    scanf("%d%d", &a, &b);
    printf("Before swaping First variable = %d\n Second variable = %d\n", a, b);
    a=a+b;
    b=a-b;
    a=a+b;
    printf("After Swapping\n First variabe = %d\n Second variable %d\n", a, b);
    return 0;
}