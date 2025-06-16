/*

This note will be available only on first file of each folder present in folder C++ .
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C++ Language.
Author has made these programmes as a reference using courses of CodingHelp - By Babbar, while himself learning C++ Language for the first time.

/*
> Date Created: June 22, 2024
> Author: Ishaan Rastogi
> Purpose: To showcase working of global scope
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

int main () {
    int a = 3; //global scope
    cout << a << endl;

    if(true) {
        cout << a << endl;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/