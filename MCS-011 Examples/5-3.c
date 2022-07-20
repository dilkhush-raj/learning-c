// Example 5.3 Write a program to calculate an Air ticket fare after discount, given the following conditions:
// 1. If passenger is below 14 years then there is 50% discount on fare
// 2. If passenger is above 50 years then there is 20% discount on fare
// 3.If passenger is above 14 and below 50 then there is 10% discount on fare.

#include <stdio.h>

int main()
{
    int age;
    float fare;
    printf("Enter age of passenger: ");
    scanf("%d", &age);
    printf("Enter fare of air ticket: ");
    scanf("%f", &fare);
    if (age < 14)
        fare = fare - fare * 0.5;
    else if (age <= 50)
        fare = fare - fare * 0.1;
    else
        fare = fare - fare * 0.2;
    printf("Air ticket fare after discount is %f", fare);
    return 0;
}