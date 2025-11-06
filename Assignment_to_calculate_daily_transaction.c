/*
Name:Samuel Munyua Gicheru
REG:CT100/G/26198/25
Description:

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, totalSales = 0.0;

    // Open the file in read mode
    file = fopen("sales.txt", "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Could not open file 'sales.txt'.\n");
        return 1;
    }

    // Read each transaction (one per line)
    while (fscanf(file, "%f", &amount) == 1) {
        totalSales += amount;
    }

    // Display total sales
    printf("Total sales for the day: KSh. %.2f\n", totalSales);

    // Close the file
    fclose(file);

    return 0;
}