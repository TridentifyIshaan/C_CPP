/*
> Date Created: June 20, 2024
> Author: Ishaan Rastogi
> Purpose: To show working of break and a new form of for loop
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << " Enter a number: " << endl;
    cin >> n;

    cout << "Printing count from 1 to n" << endl;

    int i = 1;
    for ( ; ; ) {
        if (i <= n) {
            cout << i << endl;
        }
        else {
            break;
        }
        i++;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/