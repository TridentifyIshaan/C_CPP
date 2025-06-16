/*

> Date Created: Sept 28, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to check if a no. is even or odd
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main()
{  
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        {
            printf("even \n");
        }
    else
    {
        printf("odd");
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 6C.c
./a.exe
 
*/