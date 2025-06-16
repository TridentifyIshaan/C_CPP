/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to find gross salary of employee if DA is 40% of basic salary & HRA is 20% of basic salary. (User Input: Basic Salary)
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>
int main() {
    float basicSalary, grossSalary, da, hra;

    // User input of basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    // Calculating DA
    da = 0.4 * basicSalary;

    // Calculating HRA
    hra = 0.2 * basicSalary;

    // Calculating gross salary
    grossSalary = basicSalary + da + hra;

    // Display the gross salary
    printf("Gross Salary = %f\n", grossSalary);
    return 0;
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 15.c
./a.exe
 
*/