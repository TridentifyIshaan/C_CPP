/*
> Date Created: July 17, 2024
> Author: Ishaan Rastogi
> Purpose: To show concept of pass by value
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;

void dummy ( int n ) {
    n++;
    cout << "n is " << n << endl; //output n+1
}

int main () {

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    dummy (n);

    cout << "number n is " << n << endl; //output n
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/