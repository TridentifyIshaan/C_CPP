/*
> Date Created: June 14, 2024
> Author: Ishaan Rastogi
> Purpose: To distinguish between lowercase alphabets, uppercase alphabets or primary numbers
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    char a;
    cout << "Enter the character: ";
    cin >> a;

    if (a >= 'A' && a <= 'Z') {
        cout << "This is uppercase alphabet." << endl;
    }
    else if (a >= 'a' && a <= 'z') {
        cout << "This is lowercase alphabet." << endl;
    }
    else if ( a >= '0' && a <= '9' ) {
        cout << "This is a number." << endl;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/