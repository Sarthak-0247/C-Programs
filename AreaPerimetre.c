# include<stdio.h>

int main() {
    int a=20;
    int b=15;
    int c=10;
    
    // for square
    printf("The area of a square is : = %d\n", a*a);
    printf("The perimetre of square : = %d\n", 4*a);

    //for rectangle
    printf("The area of a rectangle is : = %d\n", a*b);
    printf("The perimetre of rectangle is : = %d\n", (a+b)*2);

    // for circle
    printf("The area of a circle is : = %d\n", 3.14*(a*a));
    printf("The perimetre of circle : = %d\n", 2*3.14*a);

    // for triangle
    printf("The area of a triangle is : = %d\n", .5*a*b);
    printf("The parimeter of triangle is : = %d\n", a+b+c);

    return 0;
}