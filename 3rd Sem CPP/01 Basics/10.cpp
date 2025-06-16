/*
> Date Created: June 13, 2024
> Author: Ishaan Rastogi
> Purpose: To check which number is greater than the other.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int a,b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the number: ";
    cin >> b;

    if (a > b) {
        cout << "a is greater than b" << endl;
    }
    else if (b > a) {
        cout << "b is greater than a" << endl;
    }
    else {
        cout << "a is equal to b" << endl;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/