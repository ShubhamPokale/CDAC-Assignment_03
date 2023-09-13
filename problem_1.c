//File name :problem_1.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 3 : Problem 1
//Description : Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers.
//              Call this function from main( ) and print the results in main( ).s
//Last changed : 13-09-2023
#include<stdio.h>
#include<math.h>

// For the calculation of Standard deviation take the sum of the squared differences from the input array and mean. 
// it would be something like SD = SD + pow(arr[i] - avg ,2)
// now, to get the standard deviation the the square root of SD/n
// sqrt(SD/n); 

int func(int arr[], int n){
    int sum = 0;
    double Standard_deviation = 0.0; 
    double avg; 
    for(int i=0;i<n;i++)
        {   sum = sum + arr[i]; 
            
        
        }
    printf("The sum of the given %d integers is %d\n", n,sum);
    avg = sum/n;
    printf("The average is as follows: %f\n",avg);
    for(int i =0;i<n;i++)
        {    Standard_deviation = Standard_deviation + pow(arr[i] - avg,2);   }
    float result = sqrt(Standard_deviation/n);
    printf("The Standard deviation is %f\n",result); 
}


int main(){
    int n=5;
    int arr[n];
    printf("Enter the value of 5 integers :");
    
    for(int i=0; i<n;i++)
        scanf("%d",&arr[i]);
    
    func(arr,n);


    return 0;
}