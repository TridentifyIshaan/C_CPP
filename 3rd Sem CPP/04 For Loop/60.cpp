/*
> Date Created: June 20, 2024
> Author: Ishaan Rastogi
> Purpose: To calculate the sum of n numbers
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int sum = 0;

    for ( int i = 1; i <= n; i++) {
        sum += i;
    }
    
    cout << sum << endl;

}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/