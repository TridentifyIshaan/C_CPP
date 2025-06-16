/*
> Date Created: June 18, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 4,

      1
    2 3
  4 5 6
7 8 9 10

> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 1, num = 1;
    
    while ( i <= n ) {
        int space = 1; //new
        while( space <= n - i) { //imporant
            cout << "  "; //2 spaces
            space ++;
        }
        int j = 1;
        while ( j <= i ) { //Most important line
            cout << num << " "; //imporant
            num++;
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