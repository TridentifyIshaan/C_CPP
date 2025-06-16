/*
> Date Created: June 17, 2024
> Author: Ishaan Rastogi
> Purpose: Better version of 30.cpp

Eg- For n = 4,

1
2 1
3 2 1
4 3 2 1

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
        int j = 1;
        while ( j <= i ) { //Most important line
            cout << (i - j + 1) <<" "; // The blank spaces will be created due to the output coming 0 which is not allowed due to the conditions set fro numbers 1 to n.
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