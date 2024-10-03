# include<stdio.h>

int main() {
    int cust_i, unit;
    float t;
    printf("What is your customer id : ");
    scanf("%f", &cust_i);
    printf("What are the total units consummed");
    scanf("%f", &unit);

    if(unit <= 199) {
        t = unit*1.2;
    } else if(unit >= 200 && unit <= 400) {
        t = unit*1.5;
    } else if(unit >= 400 && unit <= 600) {
        t = unit*1.8;
    } else t = unit*2;

    if(t<=100) {
        t = 100;
        printf("total charge : %f", t);
    } else if(t >= 400) {
        t = t-100;
        printf("total charge : %f", t);
    } else {
        t = t + (t*.15) + 100;
        printf("total charge : %f", t);
    }
    return 0;
}
