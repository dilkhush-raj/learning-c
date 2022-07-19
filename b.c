// Write a program in 'C' to input length and breadth of rectangle. Find and print the area and perimeter of rectangle.

#include <stdio.h>

int main(){
    int l, b, a, p; // l = length, b= breadth, a = area, p = perimeter of rectangle
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);
    a = l*b;
    p = 2*(l+b);
    printf("Area of rectangle is %d", a);
    printf("\nPerimeter of rectangle is %d", p);
    return 0;
}