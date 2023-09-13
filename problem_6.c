//File name :problem_6.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 3 : Problem 6
//Description :If the string "Alice in wonder land" is fed to the following scanf( ) statement,
//	 what will be the contents of the arrays str1, str2, str3 and str4? scanf ( "%s%s%s%s", str1, str2, str3, str4 ) ;
//Last changed : 13-09-2023

//File name :problem_6.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 3 : Problem 6
//Description :If the string "Alice in wonder land" is fed to the following scanf( ) statement,
//	 what will be the contents of the arrays str1, str2, str3 and str4? scanf ( "%s%s%s%s", str1, str2, str3, str4 ) ;
//Last changed : 13-09-2023


#include <stdio.h>

int main() {
    char str1[50], str2[50], str3[50], str4[50];
    
    printf("Enter a string: ");
    scanf("%s %s %s %s", str1, str2, str3, str4);
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);
    
    return 0;
}
