// Example 5.10 Write a program to print first 10 even numbers

#include <stdio.h>
int main()
{
    int i;

    printf("The First 10 Even Natural Numbers are: \n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d \t", 2 * i);
    }
    return 0;
}