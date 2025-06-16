/*
> Date Created: July 018, 2024
> Author: Ishaan Rastogi
> Purpose: To print the whole array
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

int main () {

    int number[10];
    cout << "The array is [ ";

    for ( int i = 0, n = 10; i < n; i++) {
        cout << number[i] << ", ";
    }
    cout << "]";
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/