/*
Name:Samuel munyua Gicheru
Reg:CT100/G/26198/25
Description:A_bank_balance_while_loop
*/

#include <stdio.h>

int main() {
    float balance, withdraw;

    // Ask user for initial balance
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    // Continue withdrawing while balance is greater than 0
    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw; // Subtract withdrawal amount from balance

        printf("Remaining balance: %.2f\n", balance);
    }

    printf("\nYour account balance is zero or negative. No more withdrawals allowed.\n");

    return 0;
}