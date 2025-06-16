/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to convert temp. from Fahrenheit to Celsius & vice-versa (User Input: Temp. Type)
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void)
{
    int choice;
    float temperature, convertedTemperature;

    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", convertedTemperature);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", convertedTemperature);
    }
    else
    {
        printf("Invalid choice. Please select 1 or 2.\n");
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 2.c
./a.exe
 
*/