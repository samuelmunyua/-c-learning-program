/*
Name:Samuel Munyua
Reg:CT100/G/26198/25
Description:c_function_to_convert_celsus
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

// Example usage
int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}