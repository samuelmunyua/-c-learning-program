/*
Name:Samuel Munyua Gicheru
Reg:CT100/G/26198/25
Description:To_calculate_random_occupancy_assignment
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Initialize random seed

    // -------------------------------
    // 2D ARRAY: ROOM OCCUPANCY (ONE BRANCH)
    // -------------------------------
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    printf("=== Room Occupancy (One Branch) ===\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Random 0 or 1

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    printf("\n");

    // -------------------------------
    // 3D ARRAY: MULTIPLE BRANCHES
    // -------------------------------
    int chain[3][5][10];
    int branch, totalOccupied = 0, totalRooms = 3 * 5 * 10;

    printf("=== Multi-Branch Occupancy ===\n");

    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;

        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Random occupancy
                if (chain[branch][floor][room] == 1)
                    branchOccupied++;
            }
        }

        totalOccupied += branchOccupied;
        printf("Branch %d -> Occupied: %d, Vacant: %d\n",
               branch + 1, branchOccupied, 50 - branchOccupied);
    }

    printf("\nTotal occupied rooms (all branches): %d\n", totalOccupied);
    printf("Total vacant rooms (all branches): %d\n", totalRooms - totalOccupied);

    return 0;
}