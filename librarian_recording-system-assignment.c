/*
Name:Samuel Munyua Gicheru
Reg:CT100/G/26198/25
Description:c_program_for_libralian
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[100];
    char choice;

    // Open the file in append mode (adds new data without deleting existing content)
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("=== Library Borrowed Books Recording System \n");

    do {
        printf("\nEnter book title: ");
        // Read a line of text including spaces
        fgets(title, sizeof(title), stdin);

        // Remove trailing newline character if present
        for(int i = 0; title[i] != '\0'; i++) {
            if (title[i] == '\n') {
                title[i] = '\0';
                break;
            }
        }

        // Write the title to file
        fprintf(file, "%s\n", title);
        printf("? Book title '%s' successfully stored!\n", title);

        // Ask if user wants to add another title
        printf("\nDo you want to enter another title? (y/n): ");
        choice = getchar();
        getchar(); // consume the newline left by getchar()

    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("\nAll titles have been saved in 'borrowed_books.txt'.\n");

    return 0;
}