// Example 6.2 Write a program to illustrate how the marks of 10 students are read in an array and then used to find the maximum marks obtained by a student in the class.

#include <stdio.h>
#define SIZE 10

int main()
{
    int i = 0;
    int max = 0;
    int stud_marks[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("Student No. = %d\t", i + 1);
        printf("Enter the marks out of 50: ");
        scanf("%d", &stud_marks[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (stud_marks[i] > max)
            max = stud_marks[i];
    }

    printf("\n\nThe maximum of the marks obtained among all the 10 students is: %d", max);
}