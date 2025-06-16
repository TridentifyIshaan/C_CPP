/*
> Date Created: June 19, 2024
> Author: Ishaan Rastogi
> Problem 3
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int a = 1, b = 2;
    a = 10;
    if ( a-- > 0 || ++b > 2 ) { //Only of the conditions should be true for OR, that's why it won't see ++b > 2
        cout << "Stage1 - Inside If ";
    }
    else {
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;
}

//Output- Stage1 - Inside If 0 2

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/