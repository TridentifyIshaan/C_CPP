/*
> Date Created: June 16, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 3,
    3 2 1 
    3 2 1
    3 2 1

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
        int j = n;
        while ( j >= 1 ) { //Changing from j is less than n from j=1 to j is greater than 1 from j=n
            cout << j <<" ";
            j--; //And changing the flow from increasing to decrease.
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