/*
> Date Created: June 14, 2024
> Author: Ishaan Rastogi
> Purpose: To check whether a number is prime or not?
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 2;
    while ( i < n ) { //NOTE- i less than n lena hai less than equal to nahi 
        if ( n % i == 0) {
            cout << "Not Prime for " << i << endl;
        }
        else {
            cout << "Prime for " << i << endl;
        }
        i++;
    }
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/