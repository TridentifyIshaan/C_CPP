/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to accept an integer number & find sum of its digits
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
int main(void)
{
    int number, sum = 0, digit;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number != 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    printf("The sum of the digits is: %d\n", sum);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 20.c
./a.exe
 
*/