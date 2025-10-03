/* 
Name:Samuel Munyua 
Reg:CT100/G/26198/25 
Description:Water_billing asignment 
*/ 
 
#include <stdio.h> 
int main() { 
    int units; 
    float bill; 
 
    // Prompt the user 
    printf("Enter the number of water units consumed: "); 
    scanf("%d", &units); 
 
    // Calculate bill using if–else if–else 
    if (units <= 30) { 
        bill = units * 20; 
    } 
    else if (units <= 60) { 
        bill = (30 * 20) + (units - 30) * 25; 
    } 
    else { 
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30; 
    } 
 
// Display result 
printf("Total bill: %.2f KES\n", bill); 
return 0; 
}