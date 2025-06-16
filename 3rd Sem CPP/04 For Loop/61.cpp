/*
> Date Created: June 20, 2024
> Author: Ishaan Rastogi
> Purpose: To print out Fibonacci series
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a = 0;
    int b = 1;
    
    cout << a << " " << b << " ";

    for ( int i = 1 ; i <= n; i++) {
        int nextN = a + b;
        cout << nextN << " ";

        a = b; // We assigned value of b to a
        b = nextN; // Value of nextN to b
    }
    
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/