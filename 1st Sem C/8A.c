/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to check whether a triangle is Equilateral, scalene or isosceles
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{  
    int a, b, c; //3 sides of a triangle
    printf("Input three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a==b && b==c) //check whether all sides are equal
    {
        printf("This is an equilateral triangle.\n");
    }
    else if(a==b || a==c || b==c) //check whether two sides are equal
    {
        printf("This is an isosceles triangle.\n");
    }
    else //check whether no sides are equal
    {
        printf("This is a scalene triangle.\n");
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 8A.c
./a.exe
 
*/