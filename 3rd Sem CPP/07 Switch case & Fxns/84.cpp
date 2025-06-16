/*
> Date Created: July 09, 2024
> Author: Ishaan Rastogi
> Purpose: To calculate power without the in-built power function
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

int main () {

    int a, b;
    cout << "Enter the numbers :" << endl;
    cin >> a >> b;

    int ans = 1;

    for ( int i = 1; i <= b; i++ ) {
        ans *= a;
    }
    cout << "Answer is " << ans <<endl;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/