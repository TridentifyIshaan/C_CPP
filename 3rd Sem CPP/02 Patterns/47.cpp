/*
> Date Created: June 18, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 4,

   1
  121
 12321
1234321

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
        // 1st space triangle
        int space = n-i;
        while ( space ) {
            cout << " ";
            space --;
        }
        // 2nd triangle
        int j = 1;
        while ( j <= i) {
            cout << j;
            j++;
        }

        //3rd triangle
        int start = i - 1;
        while ( start ) {
            cout << start;
            start--;
        }
        i++;
        cout << endl;
    }

    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/