// Example 2.4: Write a C program to compute the average of three numbers

#include <stdio.h>

int main()
{
    int a, b, c, avg;
    printf("Enter three numbers to finds its average: ");
    scanf("%d %d %d", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("Average = %d", avg);
    return 0;
}