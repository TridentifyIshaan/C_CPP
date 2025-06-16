/*
> Date Created: June 13, 2024
> Author: Ishaan Rastogi
> Purpose: To show if a number is positive or negative or 0.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n; //cin is for user input, just like cout is for output. Eg- "( cout << n; ) will print n"

    if (n>0) {
        cout << "n is positive " << endl;
    }

    else if (n<0) {
        cout << "n is negative " << endl;
    }

    else {
        cout << "n is 0 " << endl;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/