/*

This note will be available only on first file of each folder present in folder C++ .
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C++ Language.
Author has made these programmes as a reference using courses of CodingHelp - By Babbar, while himself learning C++ Language for the first time.

/*
> Date Created: July 018, 2024
> Author: Ishaan Rastogi
> Purpose: To show how to declare array, access any element of an array amd also assigning value to an element of an array.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

int main () {

    //declaring array
    int first[15]; // any garbade value at any index
    
    //accessing an array
    cout << "Value at index 0 is " << first[0] << endl; 
    
    //declaring array
    int second[15] = {3, 5, 11}; // indices 0-2 has 3 values but afterwards, the rest indices left have 0.
    
    //accessing an array
    cout << "Value at index 3 is " << second[3] << endl;

    //declaring array
    int third[15];

    //assigning value
    third[5] = 6;
    
    //accessing an array
    cout << "Value at index 5 is " << third[5] << endl;

    //defining whole array
    int arr[3] = {1, 2, 3};
    for ( int i=0; i<3; i++) {
        cout << arr[i] << " ";
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/