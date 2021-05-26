//This code was made possible because of Benjamin
#include <stdio.h>

int main (){
float a, b, c, d;
printf("Enter loan principal:\n");
scanf("%f", &a);
printf("Enter interest rate:\n");
scanf("%f", &b);
printf("Enter term of the loan in days:\n");
scanf("%f", &c);
d = a * b * (c/365);
printf("The interest charge is $%.2f\n", d);
return 0;
}
