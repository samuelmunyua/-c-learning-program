/*
Name:Samuel Munyua Gicheru
Reg:CT100/G/26198/25
Description:c_program_for_university_examination
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;
    char choice;

    file = fopen("results.dat", "ab"); // append binary
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    do {
        printf("Enter student name: ");
        fgets(s.name, sizeof(s.name), stdin);
        for (int i = 0; s.name[i]; i++)
            if (s.name[i] == '\n') s.name[i] = '\0';

        printf("Enter registration number: ");
        fgets(s.regNo, sizeof(s.regNo), stdin);
        for (int i = 0; s.regNo[i]; i++)
            if (s.regNo[i] == '\n') s.regNo[i] = '\0';

        printf("Enter total marks: ");
        scanf("%f", &s.totalMarks);
        getchar(); // consume newline

        fwrite(&s, sizeof(struct Student), 1, file);
        printf("Record saved successfully!\n");

        printf("Add another record? (y/n): ");
        choice = getchar();
        getchar();
    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("All records saved in results.dat\n");
    return 0;
}