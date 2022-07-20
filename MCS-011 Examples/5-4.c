// Example 5.4 Write a program to award grades to students depending upon the criteria mentioned below:
//     1. Marks less than or equal to 50 are given "D" grade
//     2. Marks above 50 but below 60 are given "C" grade
//     3. Marks between 60 to 75 are given "B" grade
//     4. Marks greater than 75 are given "A" grade.
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks of student: ");
    scanf("%d", &marks);
    if (marks > 75)
        printf("Grade A");
    else if (marks > 60)
        printf("Grade B");
    else if (marks > 50)
        printf("Grade C");
    else
        printf("Grade D");
    return 0;
}