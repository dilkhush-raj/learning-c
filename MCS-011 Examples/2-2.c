// Example 2.2 Develop an algorithm, flowchart and program to add two numbers.

#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter Number1 and Number2 to add: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is %d", num1, num2, sum);
    return 0;
}