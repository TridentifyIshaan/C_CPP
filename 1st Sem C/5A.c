/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to swap 2 variables using a 3rd variable
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    int a, b, temp;
    printf("Enter two integers: \n");
    scanf("%d%d", &a, &b);
    printf("Before Swapping First variable = %d\nSecond variable = %d \n", a, b);
    
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping First variable = %d\nSecond variable = %d\n", a, b);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 5A.c
./a.exe
 
*/