/*
Name:Samuel Munyua
Reg:CT100/G/26198/25
Description:do_while_loop_assignment
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(password, "1234") != 0);

    printf("Access Granted.\n");

    return 0;
}