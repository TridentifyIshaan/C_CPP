/*
> Date Created: June 14, 2024
> Author: Ishaan Rastogi
> Purpose: To find sum of all even numbers 1 to n.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main (void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int i = 2;
    while ( i <= n ) {
        if ( i % 2 == 0 ) {
            sum += i;
        }
        i++;
    }
    cout << "Sum of all even numbers from 1 to " << n << " = " << sum << endl; 
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/