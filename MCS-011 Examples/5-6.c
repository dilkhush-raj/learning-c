// Example 5.6 Write a program to calculate the factorial of a given input natural number.

#include <stdio.h>

int main()
{
    int a;
    long int fact = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &a);
    while (a > 0)
    {
        fact = fact * a;
        a = a - 1;
    }
    printf("Factorial is %ld", fact);
    return 0;
}