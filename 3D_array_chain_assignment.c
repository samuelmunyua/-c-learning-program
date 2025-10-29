//3D arrays
/*
Name:Samuel munyua Gicheru
Reg:CT100/G/26198/25
Description:3D_array_chain_assignment
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // -------------------------------
    // 1D ARRAY: WEEKLY REVENUE TRACKER
    // -------------------------------
    float revenue[7];
    float totalRevenue = 0, averageRevenue;
    int i;

    printf("=== Weekly Revenue Tracker ===\n");
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;

    printf("\nTotal weekly revenue: KSh. %.2f\n", totalRevenue);
    printf("Average daily revenue: KSh. %.2f\n\n", averageRevenue);

    // -------------------------------
    // 2D ARRAY: ROOM OCCUPANCY (ONE BRANCH)
    // -------------------------------
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    srand(time(0)); // Initialize random number generator

    printf("=== Room Occupancy (One Branch) ===\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        // Assign random occupancy (1 = occupied, 0 = vacant)
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1

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
    int branch, totalOccupied = 0;

    printf("=== Multi-Branch Occupancy ===\n");

    // Assign random occupancy data
    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    branchOccupied++;
            }
        }
        totalOccupied += branchOccupied;
        printf("Branch %d -> Occupied Rooms: %d, Vacant Rooms: %d\n",
               branch + 1, branchOccupied, 50 - branchOccupied);
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);
    printf("Total vacant rooms across all branches: %d\n", (3 * 5 * 10) - totalOccupied);

    return 0;
}
