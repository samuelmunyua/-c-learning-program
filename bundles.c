/* 
Name:Samuel munyua 
Reg:CT100/G/26198/25 
Description:Mobile_data assignment 
*/ 
 
#include <stdio.h> 
 
int main() { 
    int choice; 
 
    // Display menu 
    printf("Internet Data Bundles:\n"); 
    printf("1. 100 MB - 50 KES\n"); 
    printf("2. 500 MB - 200 KES\n"); 
    printf("3. 1 GB   - 350 KES\n"); 
    printf("4. 2 GB   - 600 KES\n"); 
 
    // Ask for user input 
    printf("\nEnter your choice (1-4): "); 
    scanf("%d", &choice); 
 
    // Switch statement 
    switch(choice) { 
        case 1: 
            printf("You selected: 100 MB - Cost: 50 KES\n"); 
            break; 
        case 2: 
            printf("You selected: 500 MB - Cost: 200 KES\n"); 
            break; 
        case 3: 
            printf("You selected: 1 GB - Cost: 350 KES\n"); 
            break; 
        case 4: 
            printf("You selected: 2 GB - Cost: 600 KES\n"); 
            break; 
        default: 
            printf("Invalid choice! Please select between 1 and 4.\n"); 
    } 
 
    return 0; 
} 