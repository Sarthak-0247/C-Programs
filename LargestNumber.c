# include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter three number :");
    scanf("%d%d%D", &a,&b,&c);

    if(a>b &&a>c) {
        printf("a is greatest");
    } else if (b>c && b>a)
    {
        printf("b is greatest");
    } else{
        printf("c is greatest");
    }
    return 0;
}