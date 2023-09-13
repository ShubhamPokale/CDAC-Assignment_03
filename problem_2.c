//File name :problem_2.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 3 : Problem 2
//Description : Write a function that receives marks received by a student in 3 subjects and returns the average and percentage of these marks.
//	Call this function from main( ) and print the results in main( ).
//Last changed : 13-09-2023


#include<stdio.h>
double func(int arr[],int n, int total_Marks)
    {
        int sum = 0;
        double avg;
        double percent; 
        
        for(int i=0;i<n;i++)
        { sum = sum + arr[i];}
        avg = sum /n;
        percent = (sum*100)/total_Marks;
    printf("the percentage is %f", percent);
        
        }

int main(){
int n = 3;
int arr[n];
int total_Marks; 
printf("Enter the marks of the %d subjects : ",n);
for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);
printf("Enter the total marks of subject : ");
scanf("%d",&total_Marks);
func(arr, n, total_Marks);

}