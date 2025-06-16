/*
> Date Created: July 02, 2024
> Author: Ishaan Rastogi
> Purpose: To show concept of nested switch case
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

int main () {

    char ch ='1';
    int  n = 1;
    switch (ch) { //constants in the switch case be only integer and character. Neither float nor string.
        case 1: cout << "First" << endl;
                break;
        case '1': switch(n) {
            case 1: cout << "Value of n is " << n << endl;
            break;
        }
                break;
        default: cout << "Default case" << endl;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/