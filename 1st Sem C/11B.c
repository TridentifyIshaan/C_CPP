/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to find the largest of 2 numbers
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

    if(a > b)
    {
        printf("%d is largest", a);
    }
    else
    {
        printf("%d is largest", b);
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 11B.c
./a.exe
 
*/