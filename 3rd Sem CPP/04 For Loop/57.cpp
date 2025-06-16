/*

This note will be available only on first file of each folder present in folder C++ .
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C++ Language.
Author has made these programmes as a reference using courses of CodingHelp - By Babbar, while himself learning C++ Language for the first time.

/*
> Date Created: June 20, 2024
> Author: Ishaan Rastogi
> Purpose: To print number from 1 to n via for loop
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Topic -

Initialisation, condition to check before every iteration/loop, updation

for ( int i = 0; i < n; i++) {

}

*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << " Enter a number: " << endl;
    cin >> n;

    cout << "Printing count from 1 to n" << endl;

    for ( int i = 1; i <= n; i++) { // int i = 0; i < n is same as int i = 1; i <= n
        cout << i << endl;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/