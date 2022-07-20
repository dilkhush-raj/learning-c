// Example 2.5: Write a program to divide a sum of two numbers by their difference

#include <stdio.h>

int main()
{
    int a, b;
    float ans;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    ans = (a + b) / (a - b);
    printf("Answer is %f", ans);
    return 0;
}