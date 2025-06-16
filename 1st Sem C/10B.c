/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to check whether an alphabet is a vowel or a consonant
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    char c;
    printf("Input any alphabet : ");
    scanf("%c", &c);
    
    if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("The alphabet is a vowel.\n");
    }
    else if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("The alphabet is a consonant.\n");
    }
    else
    {
        printf("The character is not an alphabet.\n");
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 10B.c
./a.exe
 
*/