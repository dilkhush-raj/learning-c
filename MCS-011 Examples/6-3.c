//  Example 6.3: Write a program to display the average marks of each student, given the marks in 2 subjects for 3 students. 

#include <stdio.h>
#define SIZE 3

int main(){
    int i = 0;
    float stud_marks1[SIZE];
    float stud_marks2[SIZE];
    float total_marks[SIZE];
    float avg[SIZE];
    
    printf("\nEnter the marks in math out of 50 marks: \n");
    for (i=0; i<SIZE; i++)
    {
        printf("Student no. = %d ", i+1);
        printf("Enter the marks= ");
        scanf("%f", &stud_marks1[i]);
    }

    printf("\nEnter the marks in science out of 50 marks \n");
    for (i=0; i<SIZE; i++)
    {
        printf("Student no. = %d ", i+1);
        printf("Please enter the marks=");
        scanf("%f", &stud_marks2[i]);
    }

    for(i=0; i<SIZE; i++)
    {
        total_marks[i]=stud_marks1[i]+stud_marks2[i];
        avg[i]=total_marks[i]/2;
        printf("Student no. = %d\t Average = %f\n", i+1, avg[i]);
    }
}