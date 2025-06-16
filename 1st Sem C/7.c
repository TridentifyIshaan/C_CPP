/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to check whether a given year is leap year or not
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{  
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
        {
            printf("It's a leap year. \n");
        }
    else
    {
        printf("It's not a leap year. ");
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 7.c
./a.exe
 
*/