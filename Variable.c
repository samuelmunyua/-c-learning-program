//simple c program(IT UNITS) 
/* 
Name:Samuel Munyua 
Reg:CT100/G/26198/25 
Description:Variables 
*/ 
 
#include <stdio.h> 
 
int main() { 
    float height=1.5, weight=55; 
    char phonenumber[20];
 
    // Prompting the user for input 
    printf("Enter your height (in meters): "); 
    scanf("%f", &height);   
 
    printf("Enter your phone number: "); 
    scanf("%s", phonenumber);   
 
    printf("Enter your weight (in kilograms): "); 
    scanf("%f", &weight);   
 
    // Displaying the entered information 
    printf("\n--- Your Information ---\n"); 
    printf("Height: %.2f meters\n", height); 
printf("Phone Number: %s\n", phonenumber); 
printf("Weight: %.2f kilograms\n", weight); 
return 0; 
}