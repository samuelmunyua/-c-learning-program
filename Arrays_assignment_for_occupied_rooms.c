/*
Name:Samuel Munyua Gicheru
Reg:CT100/G/26198/25
Description:To_calculate_number_of_occupied_rooms
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0;  // Total occupied rooms across all branches

    srand(time(0));  // Initialize random seed for randomness

    printf("=== Hotel Chain Room Occupancy ===\n");

    // Assign random occupancy (1 = occupied, 0 = vacant)
    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;

        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;  // Randomly assign 0 or 1
                if (chain[branch][floor][room] == 1) {
                    branchOccupied++;
                    totalOccupied++;
                }
            }
        }

        printf("Branch %d -> Occupied Rooms: %d, Vacant Rooms: %d\n",
               branch + 1, branchOccupied, 50 - branchOccupied);
    }

    // Display total results across all branches
    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);
    printf("Total vacant rooms across all branches: %d\n", (3 * 5 * 10) - totalOccupied);

    return 0;
}
