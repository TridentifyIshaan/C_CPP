/*
> Date Created: June 17, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 4,

4 4 4 4
3 3 3
2 2
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
    int i = n; //Changing from 1 to n
    while ( i >= 1 ) { // Changing from n to 1
        int j = 1;
        while ( j <= i ) { //Most important line
            cout << i <<" ";
            j++;
        }
        cout << endl;
        i--; //Decrement
    }
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/