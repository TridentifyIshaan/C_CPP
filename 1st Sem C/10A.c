/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to check whether a character is an alphabet or digit
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    char ch;
    // Input character from user
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    // Alphabet check
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 10A.c
./a.exe
 
*/