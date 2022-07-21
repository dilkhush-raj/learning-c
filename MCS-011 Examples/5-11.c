// Example 5.11 Write a program to calculate the first smallest divisor of a number. 

#include <stdio.h>

int main(){
    int div, num, i;
    printf("Enter any number:\n");
    scanf("%d", &num);
    for (i=2; i<=num; ++i)
    {
        if ((num % i) == 0)
        {
            printf("Smallest divisor for number %d is %d", num, i);
            break;
        }
    }
}