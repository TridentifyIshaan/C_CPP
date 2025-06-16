/*
> Date Created: June 18, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 4,

1111
 222
  33
   4

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
        int space = 1; //new
        while( space < i) { //imporant
            cout << " ";
            space ++;
        }
        int j = 1;
        while ( j <= n - i + 1 ) { //Most important line
            cout << i; //imporant
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