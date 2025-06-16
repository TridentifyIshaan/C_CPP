/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to find the factorial of any number
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
int main(void)
{
    int i,fact=1,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    for(i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d",number,fact);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 18.c
./a.exe
 
*/