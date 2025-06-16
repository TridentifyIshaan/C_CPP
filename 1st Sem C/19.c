/*

> Date Created: October 15, 2023
> Author: Ishaan Rastogi
> Purpose: WAP in C to print Fibonacci sequence 0 1 1 2 3 5 8 13 …. N terms & print the sum of the sequence.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, next_term = 0, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("The number of terms should be at least 2.\n");
        return 1; // Exit the program with an error code.
    }
    
    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if (i == 1) {
            printf("%d ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d ", t2);
            continue;
        }
        next_term = t1 + t2;
        t1 = t2;
        sum += next_term;
        t2 = next_term;
        // Prints the next term.
        printf("%d ", next_term);
    }
    
    // Calculates the sum of the sequence.
    sum = sum + 1;
    printf("\nSum of Sequence: %d", sum);
    return 0;
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 19.c
./a.exe
 
*/