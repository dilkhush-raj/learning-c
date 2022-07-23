// Example 6.5 Write a program to sort a list of elements using the selection sort method

// #include <stdio.h>
// #define SIZE 5

// int main()
// {
//     int j, min_pos, tmp;
//     int i;
//     int a[SIZE];

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("Element no. =%d ", i + 1);
//         printf("Value of the element: ");
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i < SIZE; i++)
//     {
        
//         for (min_pos = i; a[j] < a[min_pos])
//             min_pos = j;
//         tmp = a[i];
//         a[i] = a[min_pos];
//         a[min_pos] = tmp;
//     }

//     printf("The array after sorting: \n");
//     for (i = 0; i < SIZE; i++)
//         printf("%d\n", a[i]);
// }