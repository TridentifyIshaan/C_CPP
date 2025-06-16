/*
> Date Created: June 17, 2024
> Author: Ishaan Rastogi
> Purpose: Better version of 30.cpp

Eg- For n = 4,


4 5 6 7
3 4 5
2 3
1

> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = n;
    while ( i >= 1 ) {
        int j = i; // New thing to learn
        while ( j < i+i ) { //Most important line
            cout << j <<" ";
            j++;
        }
        cout << endl;
        i--;
    }
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/