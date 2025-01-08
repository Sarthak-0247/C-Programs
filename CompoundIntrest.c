# include<stdio.h>
# include<math.h>

void Compound_Intrest(double Principal, double Rate, double Time) {
    double Amount;
    Amount = Principal * pow((1 + Rate/100), Time);

    double Compound_Intrest;
    Compound_Intrest = Amount - Principal;
    printf("The Compound Intrest is %.2lf", Compound_Intrest);
}

int main() {
    double Principal;
    printf("Enter The Principal Amount: ");
    scanf("%lf", &Principal);

    double Rate;
    printf("Enter The Intrest Rate: ");
    scanf("%lf", &Rate);

    double Time;
    printf("Enter The Time Periods(in Years): ");
    scanf("%lf", &Time);

    Compound_Intrest(Principal, Rate, Time);

    return 0;
}