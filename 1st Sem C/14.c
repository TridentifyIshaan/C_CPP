/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to accept a coordinate point in a XY Coordinate system & determine in which quadrant the coordinate point lies.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int co1,co2;
    printf("Input the values for X and Y coordinate : ");
    scanf("%d %d",&co1,&co2);
    
    if( co1 > 0 && co2 > 0)
    {
        printf("The coordinate point (%d,%d) lies in the First quandrant.\n",co1,co2);
    }
    else if( co1 < 0 && co2 > 0)
    {
        printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",co1,co2);
    }
    else if( co1 < 0 && co2 < 0)
    {
        printf("The coordinate point (%d, %d) lies in the Third quandrant.\n",co1,co2);
    }
    else if( co1 > 0 && co2 < 0)
    {
        printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",co1,co2);
    }
    else if( co1 == 0 && co2 == 0)
    {
        printf("The coordinate point (%d,%d) lies at the origin.\n",co1,co2);
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 13.c
./a.exe
 
*/