//File name :problem_3.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 3 : Problem 3
//Description : C program to read array elements and print the value with the addresses
//Last changed : 13-09-2023


#include<stdio.h>

int main(){
int n;
int arr[] = {3,4,5,4,3,4,5,4,5,3,3,3}; 
n = sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n;i++)
    { printf("\nThe address of the element in %d position is %d \n", i+1, &arr[i]);}

}
