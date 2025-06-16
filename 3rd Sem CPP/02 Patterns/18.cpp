/*
> Date Created: June 14, 2024
> Author: Ishaan Rastogi
> Purpose: To print a pattern of n number n times in same row

Eg- For n = 3,
    1 1 1
    2 2 2
    3 3 3

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
    while ( i <= n ) {
        int j = 1;
        while ( j <= n ) {
            cout << i <<" ";
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