// Example 6.1 Write a program to declare and read values in an array and display them.

#include <stdio.h>
#define SIZE 5

int main()
{
    int i = 0;
    int stud_marks[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("Element no. = %d", i + 1);
        printf("Enter the value of the element: ");
        scanf("%d", &stud_marks[i]);
    }
    printf("\nFollowing are the values stored in the corresponding array elments: \n\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("Value stored in a [%d] is %d\n", i stud_marks[i]);
    }
}
