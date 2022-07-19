// Write a program in "C" to input principal, rate and time. Find and print simple intrest and amount. 

#include <stdio.h>

int main(){
    float si, a, t, p, r;
    printf("Enter principal amount: ");
    scanf("%g", &p);
    printf("Enter rate of interest: ");
    scanf("%g", &r);
    printf("Enter Time period in year: ");
    scanf("%g", &t);
    si = (p*r*t)/100;
    a = p + si;
    printf("Simple interest is %g", si);
    printf("\nTotal amount is %g", a);
    return 0;
}