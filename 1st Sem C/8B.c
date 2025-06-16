/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to check whether a triangle is right, obtuse or acute angle triangles
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    printf("Enter the three angles of the triangle (in degrees):\n");
    
    printf("Angle 1: ");
    scanf("%lf", &a);
    printf("Angle 2: ");
    scanf("%lf", &b);
    printf("Angle 3: ");
    scanf("%lf", &c);

    // Check if the sum of angles is 180 degrees (valid triangle)
    if (a + b + c == 180)
    {
        if (a == 90 || b == 90 || c == 90)
        {
            printf("It is a right angle triangle.\n");
        }
        else if (a > 90 || b > 90 || c > 90)
        {
            printf("It is an obtuse angle triangle.\n");
        }
        else
        {
            printf("It is an acute angle triangle.\n");
        }
    }
    else
    {
        printf("These angles do not form a valid triangle.\n");
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 8B.c
./a.exe
 
*/