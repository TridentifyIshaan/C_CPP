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
    int a = 3; //global scope
    cout << a << endl;

    if(true) {
        int a = 5; //local scope
        cout << a << endl;
    }
    cout << a << endl; //Output - 3
}


/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/