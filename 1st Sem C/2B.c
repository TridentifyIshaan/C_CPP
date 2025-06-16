/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to find Simple Interest
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    int P, R, T, SI;
    
    printf("Enter the principal: ");
    scanf("%d", &P);
    
    printf("Enter the rate: ");
    scanf("%d", &R);
    
    printf("Enter the time in years: ");
    scanf("%d", &T);
    
    SI = (P*R*T)/ 100;
    printf("The simple interest is %d", SI);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 2B.c
./a.exe
 
*/