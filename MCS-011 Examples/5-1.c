// Example 5.1 Write a program to calculate the net salary of an employee, if a tax of 15% is levied on his gross-salary if it exceeds Rs. 10,000/- per month.

#include <stdio.h>

int main()
{
    int s;
    float ns, tax;
    printf("Enter salary of an employee: ");
    scanf("%d", &s);
    if (s > 10000)
    {
        tax = s * 0.15;
        ns = s - tax;
        printf("Net salary of an employee is %f after %f tax levied on his gross-salary", ns, tax);
    }
    else
        printf("Employee net salary is %d", s);
    return 0;
}