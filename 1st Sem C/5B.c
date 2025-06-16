/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to swap 2 variables without using a 3rd variable
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    int a, b, temp;
    printf("Enter two integers\n");
    scanf("%d%d", &a, &b);
    printf("Before Swapping\nFirst variable = %d\nSecond variable = %d\n", a, b);
    
    a += b;
    b = a - b;
    a -= b;
    printf("After Swapping\nFirst variable = %d\nSecond variable = %d\n", a, b);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 5B.c
./a.exe
 
*/