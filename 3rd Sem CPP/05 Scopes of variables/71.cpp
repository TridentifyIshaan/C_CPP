/*
> Date Created: June 22, 2024
> Author: Ishaan Rastogi
> Purpose: To showcase working of local scope
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

int main () {

    int i = 8; //global scope
    
    for ( int i = 0; i < 8; i++) { //local scope -> 'int i = 0'
        cout << " HI " << endl;
    }
}

//output- HI in 8 lines

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/