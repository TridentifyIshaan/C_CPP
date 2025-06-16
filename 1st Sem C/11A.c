/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to find the smallest of 2 numbers
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    int a, b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    
    if(a < b)
    {
        printf("%d is smallest", a);
    }
    else
    {
        printf("%d is smallest", b);
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 11A.c
./a.exe
 
*/