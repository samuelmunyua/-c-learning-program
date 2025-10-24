/*
Name:Samuel Munyua
Reg:CT100/G/26198/25
Description:c_function_to_calculate_electric_bill
*/
#include <stdio.h>

float calculateElectricBill(int units) {
    float total;

    if (units <= 100) {
        total = units * 10;
    } 
    else if (units <= 200) {
        total = (100 * 10) + (units - 100) * 15;
    } 
    else {
        total = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return total;
}

// Example usage
int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float bill = calculateElectricBill(units);
    printf("Total Electric Bill = KSh. %.2f\n", bill);

    return 0;
}