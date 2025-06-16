/*
> Date Created: June 20, 2024
> Author: Ishaan Rastogi
> Purpose: To show multiple variable usage in for loop
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    for ( int a = 0, b = 1, c = 3; a >= 0 && b >= 1 && c >= 2 ; a--, b--, c-- ) {
        cout << a << " " << b << " " << c << endl;
    }
}

//Output - 0 1 2

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/