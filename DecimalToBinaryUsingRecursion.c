#include<stdio.h>
long to_Bin(int);

int main() {
    long Bin_No;
    int Dec_No;
    printf("\n\n Function : convert decimal to binary: \n");

    printf("Input any decimal number: ");
    scanf("%d", &Dec_No);
    Bin_No = to_Bin(Dec_No);
    printf("\n The  binary value is :%d\n\n",Bin_No);
    return 0;
}
long to_Bin(int Dec_No)
{
long Bin_No=0,remainder,f=1;
while(Dec_No !=0)
{
    remainder=Dec_No%2;
    Bin_No=Bin_No+remainder *f;
    f =f*10;
    Dec_No=Dec_No/2;
}
return Bin_No;
}