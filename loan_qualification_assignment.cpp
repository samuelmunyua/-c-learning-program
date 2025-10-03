/* 
Name: Samuel Munyua 
Registration number: CT100/G/26198/25 
Course: BSc IT 
Unit: introduction to programming and problem solving  
Description: A program to check for a loan qualifications by a bank and 
give feedback  
*/ 
 
#include <stdio.h> 
 
int main() { 
    int age; 
    float income; 
 
    // Get user input 
    printf("Enter your age: "); 
    scanf("%d", &age); 
 
    printf("Enter your annual income (in Sh): "); 
    scanf("%f", &income); 
 
    // Check loan qualification 
    if (age >= 21 && income >= 21000) { 
        printf("Congratulations, you qualify for a loan.\n"); 
    } else { 
        printf("Unfortunately, we are unable to offer you a loan at this 
time.\n"); 
    } 
 
    return 0; 
}