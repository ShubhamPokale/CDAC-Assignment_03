//File name :problem_5.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 3 : Problem 5
//Description : Write a C program to accept 5 numbers, store them in array and find out the smallest number using pointer. 
//Last changed : 13-09-2023
#include <stdio.h>

int findSmallest(int *arr, int size);

int main() {
    int numbers[5];
    
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int smallest = findSmallest(numbers, 5);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}

int findSmallest(int arr[], int size) {
    int smallest = *arr; // Initialize smallest with the first element of the array

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < smallest) {
            smallest = *(arr + i);
        }
    }

    return smallest;
}
