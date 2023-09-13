//File name :problem_4.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 3 : Problem 4
//Description : Write a C program to find location os given element in array.
//Last changed : 13-09-2023

#include<stdio.h>

int main(){
int loc;
int *address_of_element; 
int arr[]= {1,2,3,4,5,6,7,8,9,10};
printf("Enter the element whose location you want to know : "); 
scanf("%d", &loc);
int n = sizeof(arr)/sizeof(arr[0]);

for(int i=1;i<loc;i++){
    // printf("The location of given element %d is %d ",loc, &arr[i]);
    address_of_element = &arr[i];
}

printf("The location of given element is %d ", address_of_element);

}