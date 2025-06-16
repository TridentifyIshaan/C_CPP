/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to convert specified days into years, weeks and days
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    int D, Y, W;
    printf("Input number of days: ");
    scanf("%d", &D);
    
    Y = D/365;
    W = (D % 365)/7;
    D = D - ((Y*365) + (W*7));

    printf("Years: %d\n", Y);
    printf("Weeks: %d\n", W);
    printf("Days: %d \n", D);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 6B.c
./a.exe
 
*/