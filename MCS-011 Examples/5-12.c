// Example 5.12 Write a program to print first 20 natural numbers skipping the numbers divisible by 5. 

#include <stdio.h>

int main(){
    int i;
    for (i = 1; i <= 20; ++i){
        if((i % 5) == 0)
        continue;
        printf("%d ", i);
    }
}