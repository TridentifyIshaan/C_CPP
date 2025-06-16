/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to calculate & print the Electricity bill of a given customer. (User Input: customer id & unit consumed by the user ) Also display the total amount to pay to the customer.

Upto 199 ----- 1.20
200-500 ------ 1.80
Above 500 --- 2.00

If bill exceeds ₹ 400 then surcharge of 15% will be charged and the minimum bill should be of ₹ 100/-

> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
int main(void)
{
    int customerID;
    float unitsConsumed, totalAmount, surcharge = 0.0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    if (unitsConsumed < 0) {
        printf("Invalid input. Units consumed cannot be negative.\n");
    } else {
        if (unitsConsumed <= 199)
            totalAmount = unitsConsumed * 1.20;
        else if (unitsConsumed >= 200 && unitsConsumed <= 500)
            totalAmount = unitsConsumed * 1.80;
        else
            totalAmount = unitsConsumed * 2.00;

        if (totalAmount > 400)
            surcharge = totalAmount * 0.15;

        totalAmount += surcharge;

        // Minimum bill of ₹100
        if (totalAmount < 100)
            totalAmount = 100;

        printf("Customer ID: %d\n", customerID);
        printf("Units Consumed: %.2f\n", unitsConsumed);
        printf("Total Amount to Pay: ₹%.2f\n", totalAmount);
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 16.c
./a.exe
 
*/