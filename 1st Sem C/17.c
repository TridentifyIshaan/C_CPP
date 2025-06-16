/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: A library charges a fine for every book returned late. For first 5 days the fine is 50 p, for 6-10 days, fine is ₹1 and above 10 days, fine is ₹5. If you return the book after 30 days your membership will be cancelled. WAP in C to accept the number of days the member is late to return the book and display the fine or appropriate message.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
int main(void) {
    int daysLate;
    float fine = 0.0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0) {
        printf("No fine. The book is returned on time.\n");
    } else if (daysLate <= 5) {
        fine = 0.50 * daysLate;
        printf("Fine: ₹%.2f\n", fine);
    } else if (daysLate <= 10) {
        fine = 2.50 + (daysLate - 5) * 1.00;
        printf("Fine: ₹%.2f\n", fine);
    } else if (daysLate <= 30) {
        fine = 7.50 + (daysLate - 10) * 5.00;
        printf("Fine: ₹%.2f\n", fine);
    } else {
        fine = 7.50 + (daysLate - 10) * 5.00;
        printf("Fine: ₹%.2f\n", fine);
        printf("Your membership is cancelled as the book is returned after 30 days.\n");
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 17.c
./a.exe
 
*/