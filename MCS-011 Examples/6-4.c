//  Example 6.4 Write a program to search an element in a given list of elements using Linear Search. 

#include <stdio.h>
#define SIZE 5

int main(){
    int i = 0, j;
    int num_list[SIZE];

    printf("Enter any 5 numbers: \n");
    for(i = 0; i<SIZE; i++)
    {
        printf("Element no. = %d Value of the element = ", i+1);
        scanf("%d", &num_list[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &j);

    for(i=0; i<SIZE; i++) {
        if(j==num_list[i]){
            printf("The number exists in the list at position : %d\n", i+1);
            break;
        }
    }
}