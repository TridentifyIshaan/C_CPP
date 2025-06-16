/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to display first letter of your name in terms of # using loop
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
int main(void)
{
    int H, W;
    printf("Enter the height of the letter I: ");
    scanf("%d", &H);

    if (H < 3)
    {
        printf("The height must be at least 3 to display the letter I.\n");
    }
    else
    {
        W = H % 2 == 0 ? H + 1 : H;

        for (int i = 1; i <= H; i++)
        {
            for (int j = 1; j <= W; j++)
            {
                if (j == (W/2) + 1 || i == 1 || i == H)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 21.c
./a.exe
 
*/