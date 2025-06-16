/*
> Date Created: July 018, 2024
> Author: Ishaan Rastogi
> Purpose: To initial all elements of an array with 0
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

// NOTE - Initialisation can onlly happen by 0, not any other number like 1, 2, ...

#include <iostream>
using namespace std;

int main () {

    //initialising with 0
    int number[10] = {0};
    cout << "The array is [ ";

    for ( int i = 0, n = 10; i < n; i++) {
        cout << number[i] << ", ";
    }
    cout << "]" << endl;

    //initialising with 1
    int first[10] = {1};
    cout << "The array is [ ";

    for ( int i = 0, n = 10; i < n; i++) {
        cout << first[i] << ", ";
    }
    cout << "]" << endl;

    // 1 is only added at the index 0, refer to the NOTE again.
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/