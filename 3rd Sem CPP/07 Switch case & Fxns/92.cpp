/*
> Date Created: July 15, 2024
> Author: Ishaan Rastogi
> Purpose: To count total no. of set bits ( bit = 1 ) in a & b
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 99% Working ( additional 0 is coming at the end, if not using return 0; then n+1 will be showcased at the and)

*/

#include<iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0;
    int b = 1;
    
    cout << a << " " << b << " ";
    
    for ( int i = 1 ; i <= n; i++) {
        int nextN = a + b;
        cout << nextN << " ";

        a = b; // We assigned value of b to a
        b = nextN; // Value of nextN to b
    }
    return 0;
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fibonacci(n);
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/