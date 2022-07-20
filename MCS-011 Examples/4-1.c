// Example: 4.1 Program to find relationship between two numbers

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("%d = %d", a, b);
    else if (a > b)
        printf("%d > %d", a, b);
    else
        printf("%d < %d", a, b);
    return 0;
}