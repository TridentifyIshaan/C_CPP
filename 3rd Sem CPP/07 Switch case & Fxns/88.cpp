/*
> Date Created: July 15, 2024
> Author: Ishaan Rastogi
> Purpose: To show counting
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;

//counting function is set to void so as to not to return anything
//basically this is the function to store the counting and we will return this counting via main function
void printCounting (int n) {

    for ( int i=1; i <= n; i++) {
        cout << i << endl;
    }
}

//main function
int main () {

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    cout << endl;
    printCounting(n);
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/