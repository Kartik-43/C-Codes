// the use of %d in printf to print addresses is not recommended; you should use %p and cast the address to void* to print addresses correctly.

#include <stdio.h>

int main()
{
    char a = '3';
    char *ptra = &a;

    printf("%d\n", ptra);  // 1. Print the address of 'a' (ptra)

    ptra--;

    printf("%d\n", ptra);  // 2. Print the address of 'a' after decrementing ptra
    printf("%d", ptra - 2);  // 3. Print the address of 'a' minus 2

    int arr[] = {311, 52, 3, 4, 5, 6, 67};
    int *arrayptr = arr;

    printf("Value at position 3 of the array is %d\n", arr[3]);  // 4. Print the value at index 3 of the array 'arr'

    printf("The address of the first element of the array is %d \n", &arr[0]);  // 5. Print the address of the first element of 'arr'
    printf("The address of the first element of the array is %d \n", arr);  // 6. Same as 5

    printf("The address of the second element of the array is %d \n", &arr[1]);  // 7. Print the address of the second element of 'arr'
    printf("The address of the second element of the array is %d \n", arr + 1);  // 8. Same as 7

    printf("The address of the third element of the array is %d \n", &arr[2]);  // 9. Print the address of the third element of 'arr'
    printf("The address of the third element of the array is %d \n", arr + 2);  // 10. Same as 9

    // arr--; // this line will throw an error

    printf("The value at the address of the first element of the array is %d \n", *(&arr[0]));  // 11. Print the value at the address of the first element of 'arr'
    printf("The value at the address of the first element of the array is %d \n", arr[0]);  // 12. Same as 11
    printf("The value at the address of the first element of the array is %d \n", *(arr));  // 13. Same as 11

    printf("The value at the address of the second element of the array is %d \n", *(&arr[1]));  // 14. Print the value at the address of the second element of 'arr'
    printf("The value at the address of the second element of the array is %d \n", arr[1]);  // 15. Same as 14
    printf("The value at the address of the second element of the array is %d \n", *(arr + 1));  // 16. Same as 14

    return 0;
}

// #include<stdio.h>

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *ptra = arr;

//     printf("Address of first element of array traditionally : %d \n", &arr[0]);
//     printf("Address of Second element of array traditionally : %d \n\n", &arr[1]);

//     printf("Address of first element of array using arr : %d \n", arr);
//     printf("Address of Second element of array using arr : %d \n\n", arr + 1);

//     printf("Address of first element of array using pointer ptra : %d \n", ptra);
//     printf("Address of Second element of array using pointer ptra : %d \n\n", ptra + 1);

//     printf("Th value of first element of the array is traditionally : %d\n", arr[0]);
//     printf("Th value of second element of the array is traditionally : %d\n\n", arr[1]);

//     printf("Th value of first element of the array is using arr : %d\n", *arr);
//     printf("Th value of second element of the array is using arr : %d\n\n", *(arr + 1) );

//     printf("Th value of first element of the array is using pointer ptra : %d\n", *ptra);
//     printf("Th value of second element of the array is using pointer ptra : %d\n\n", *(ptra + 1));

//     return 0;
// }
