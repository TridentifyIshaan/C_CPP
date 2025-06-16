/*
> Date Created: June 16, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 3,
    1 2 3 
    4 5 6
    7 8 9

> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 1;
    int a = 1; // New thing to learn
    while ( i <= n ) {
        int j = 1;
        while ( j <= n ) {
            cout << a <<" "; //printing a
            a++; // incrementing a
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/