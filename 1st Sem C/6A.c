/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to convert a given integer ( in seconds ) to hours, minutes and seconds.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    int sec, h, m, s;
    printf("Input seconds: ");
    scanf("%d", &sec);

    h = (sec/3600);
    m = (sec -(3600*h))/60;
    s = (sec -(3600*h)-(m*60));
    printf("Hours:Minutes:Seconds - %d:%d:%d\n",h,m,s);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 6A.c
./a.exe
 
*/