# include<stdio.h>

int main() {
    int cust_id, unit;
    float t;
    // Take customer Id and units consumed as input
    printf("What is your customer id : ");
    scanf("%d", &cust_id);
    printf("What are the total units consummed: ");
    scanf("%d", &unit);

    // Calculate the total charge on the number of units consumed
    if(unit <= 199) {
        t = unit*1.2;
    } else if(unit >= 200 && unit <= 400) {
        t = unit*1.5;
    } else if(unit >= 400 && unit <= 600) {
        t = unit*1.8;
    } else t = unit*2;

    // minimum charge is 100
    if(t<=100) {
        t = 100;
    } 
    // add 15% surcharge if bill exceeds 400
    if(t>400)  {
        t = t + (t * 0.15);
    }

    printf("customer id: %d\n", cust_id);
    printf("total units consummed: %d\n", unit);
    printf("total charge: %.2f\n", t);

    return 0;
}