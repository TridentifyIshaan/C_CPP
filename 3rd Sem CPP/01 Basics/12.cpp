/*
> Date Created: June 14, 2024
> Author: Ishaan Rastogi
> Purpose: To print numbers 1 to n
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main (void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while ( i <= n ) {
        cout << i << endl;
        i++;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/