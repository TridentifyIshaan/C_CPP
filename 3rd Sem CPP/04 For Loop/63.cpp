/*
> Date Created: June 20, 2024
> Author: Ishaan Rastogi
> Purpose: To showcase use of continue.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {

    for ( int i=0; i < 2; i++) {
        cout << "Bado Badi ";
        continue;
        cout << "Aage bola to...";
    }
    cout << endl;
    for ( int i=0; i < 2; i++) {
        cout << "Badu Badi ";
        continue;
        cout << "Behra hai kya tu, chup kar jaa";
    }
    cout << endl <<endl;

    cout << "Le him:" <<endl <<endl << "Hoye Hoye Aaye Haye, Oye Hoye Oye Hoye" << endl << "Aaye Haye Aye Haye, Oye Hoye Oye Hoye" << endl;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/