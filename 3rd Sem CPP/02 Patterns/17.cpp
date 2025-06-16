/*

This note will be available only on first file of each folder present in folder C++ .
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C++ Language.
Author has made these programmes as a reference using courses of CodingHelp - By Babbar, while himself learning C++ Language for the first time.

/*
> Date Created: June 14, 2024
> Author: Ishaan Rastogi
> Purpose: To print n x n pattern of *
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 0;
    while ( i < n ) {
        int j = 0;
        while ( j < n ) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/