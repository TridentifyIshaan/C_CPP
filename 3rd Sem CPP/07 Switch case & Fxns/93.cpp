/*
> Date Created: July 17, 2024
> Author: Ishaan Rastogi
> Purpose: To find out nth term of Fibonacci series
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0;
    int b = 1;

    if ( n == 0) {
        return 0;
    }
    
    for ( int i = 2 ; i <= n; i++) {
        int c = a + b;
        a = b; // We assigned value of b to a
        b = c; // Value of c to b
    }
    return b;
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fibonacci(n);
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/