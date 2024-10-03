# include<stdio.h>

int main () {
    char oper;
    double n1, n2, result;

    printf("enter an operator (+, -, *, /) : ");
    scanf("%c", &oper);

    printf("enter first number: ");
    scanf("%lf", &n1);

    printf("enter second number: ");
    scanf("%lf", &n2);

    switch (oper) {
        case '+' : result = n1 + n2;
            printf("%.2f + %.2f = %.2f\n", n1, n2, result);
            break;
        case '-' : result = n1 - n2;
            printf("%.2f - %.2f = %.2f\n", n1, n2, result);
            break;
        case '*' : result = n1 * n2;
            printf("%.2f * %.2f = %.2f\n", n1, n2, result);
            break;
        case '/' : if (n2 != 0) {
            result =n1 / n2;
            printf("%.2f - %.2f = %.2f\n", n1, n2, result);
        } else {
            printf("Wrong : Divided by zero not allow.\n");
        } 
            break;      
        default: printf("Wrong: Invalid operator.\n");
                 break;    
        
    }
    return 0;
}