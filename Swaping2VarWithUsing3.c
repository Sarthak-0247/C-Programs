# include<stdio.h>

int main() {
    int a,b,t;
    printf("Enter two intergers \n");
    scanf("%d%d", &a, &b);
    printf("Before Swaping first variable = %d\n second variable = %d\n", a, b);
    t=a;
    a=b;
    b=t;
    printf("After Swaping\n first variable = %d\n second variable = %d", a, b);
    return 0;
}