/*
Name:Samuel Munyua
Reg:CT100/G/26198/25
Description:c_function_to_calculate_fare
*/

#include <stdio.h>

// Function to calculate fare
float calculateFare(float distance) {
    float rate = 50.0; 
    float totalFare = distance * rate;
    return totalFare;
}

// Example usage
int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    float fare = calculateFare(distance);
    printf("Total fare: KSh. %.2f\n", fare);

    return 0;
}