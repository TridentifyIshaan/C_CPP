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

    int i = 8; //global scope

    for ( ; i < 8; i++) { //local scope is not available
        cout << " HI " << endl;
    }
}

//output- Empty output as i is set to 8 and for loop will not run because i = 8 doesn't satisfy the condition of for loop.

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/