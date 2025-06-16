/*
> Date Created: June 18, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 5,

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1 
1 * * * * * * * * 1

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
        // 1st triangle from 1 to n - i + 1
        int j = 1;
        while ( j <= n - i + 1) {
            cout << j << " ";
            j++;
        }

        //2nd star triangle (i-1)*2 times
        j = 1;
        while ( j <= (i-1)*2 ) {
            cout << "* ";
            j++;
        }

        //3rd triangle from n - i + 1 to 1

        j = n - i + 1;
        while ( j >= 1) {
            cout << j << " ";
            j--;
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