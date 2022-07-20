// Example 5.2 Write a program to print whether the given number is even or odd.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is a prime number", a);
    else
        printf("%d is odd number", a);
    return 0;
}