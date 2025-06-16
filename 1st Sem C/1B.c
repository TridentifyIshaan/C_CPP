/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to add 2 numbers
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
int main(void)
{
    int A, B, C, sum;
    printf("\nEnter the First Number: ");
    scanf("%d",&A);
    printf("\nEnter the Second Number: ");
    scanf("%d",&B);
    printf("\nEnter the Third Number: ");
    scanf("%d",&C);
    sum = A + B + C;
    printf("\nSum of Numbers: %d",sum);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 1B.c
./a.exe
 
*/