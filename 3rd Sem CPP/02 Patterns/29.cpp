/*
> Date Created: June 17, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 4,

1
2 3
3 4 5
4 5 6 7

Logic- For every row, i increases

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
    int a = 1;
    while ( i <= n ) {
        int j = 1;
        a = i; //New thing to learn
        while ( j <= i ) { //Most important line
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