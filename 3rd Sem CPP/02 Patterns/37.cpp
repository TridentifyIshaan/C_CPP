/*
> Date Created: June 17, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 4,

A B C D 
B C D E 
C D E F 
D E F G

> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 1;
    while ( i <= n ) {
        char a = 'A' + i - 1; //Important
        int j = 1;
        while ( j <= n ) { //Most important line
            cout << a <<" ";
            a++;
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