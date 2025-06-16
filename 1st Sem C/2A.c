/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to find the area of the circle
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
int main(void)
{
    float pie = 3.14;
    int radius;
    
    printf("Enter The Radius of Cicle:");
    scanf("%d",&radius);
    
    printf("The radius of the circle is %d\n" , radius);
    float area = (float)(pie* radius * radius);
    printf("The area of the given circle is %f", area);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 2A.c
./a.exe
 
*/