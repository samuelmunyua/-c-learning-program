/*
Name:Samuel Munyua Gicheru
Reg:CT100/G/26198/25
Description:A program to calculate volume and surface area
*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height;
    float volume, surfaceArea;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display results
    printf("Volume of the cylinder: %.2lf\n", volume);
    printf("Surface area of the cylinder: %.2lf\n", surfaceArea);

return 0;
}
