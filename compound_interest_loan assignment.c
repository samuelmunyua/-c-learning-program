/* 
Name: Samuel munyua 
Registration number: CT/100/G/26198/25 
Course: BSc IT 
Unit: introduction to programming and problem solving  
Description: A C program to calculate compound interest   
*/ 
 
#include <stdio.h> 
#include <math.h>  // for pow() 
 
int main() { 
    float principal, rate, time, amount, compoundInterest; 
    int n; 
 
    // Input 
    printf("Enter the principal amount: "); 
    scanf("%f", &principal); 
 
    printf("Enter the annual interest rate (in %%): "); 
    scanf("%f", &rate); 
 
    printf("Enter the time (in years): "); 
    scanf("%f", &time); 
 
    printf("Enter the number of times interest is compounded per year: 
"); 
    scanf("%d", &n); 
 
    // Calculation 
    amount = principal * pow((1 + rate / (100 * n)), n * time); 
    compoundInterest = amount - principal; 
 
    // Output 
    printf("Compound Interest = %.2f\n", compoundInterest); 
    printf("Total Amount after %.2f years = %.2f\n", time, amount); 
 
    return 0; 
} 
 
