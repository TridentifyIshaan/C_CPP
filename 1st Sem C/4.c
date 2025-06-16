/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C that accepts 2 item’s weights (floating points’ values) & no. of purchase (floating points’ values) and calculate the average value of the items.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    double W1, N1, W2, N2, result;
    printf("Weight of Item 1: ");
    scanf("%lf", &W1);
    
    printf("No. of Item 1: ");
    scanf("%lf", &N1);
    
    printf("Weight of Item 2: ");
    scanf("%lf", &W2);
    
    printf("No. of Item 2: ");
    scanf("%lf", &N2);
    
    result = ((W1*N1) + (W2*N2)) / (N1+N2);
    printf("Average Value = %f\n", result);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 4.c
./a.exe
 
*/