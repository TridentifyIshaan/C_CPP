/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to calculate the root of a Quadratic Equation
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, discriminant, root1, root2;
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b*b - 4*a*c;

    if (discriminant < 0)
    {
        printf("No real roots exist.\n");
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("The root is: %.2f\n", root1);
    }
    else
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are: %.2f and %.2f\n", root1, root2);
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 13.c
./a.exe
 
*/