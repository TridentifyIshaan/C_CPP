/*
> Date Created: July 01, 2024
> Author: Ishaan Rastogi
> Purpose: To show usage of character in the concept of switch case
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

int main () {

    char ch ='1';
    switch (ch) { //constants in the switch case be only integer and character. Neither float nor string.
        case 1: cout << "First" << endl;
                break;
        case '1': cout << "Character one" << endl;
                break;
        default: cout << "Default case" << endl;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/