/*
> Date Created: June 22, 2024
> Author: Ishaan Rastogi
> Purpose: Problem 5
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {

    for ( int i = 0; i < 5; i++) {
        for ( int j = i; j <= 5; j++) { //The most important component for this code is int j = i, because of it, this pattern is being formed where at one i, different valeus of j will be printed from j=1 to 5, growing each time.
            
            //Output will be same because all the output from the previous problem doesn't satisfy this if loop condition.
            if ( i + j == 10 ) {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
}

/*
Output -

0 0
0 1
0 2
0 3
0 4
0 5
1 1
1 2
1 3
1 4
1 5
2 2
2 3
2 4
2 5
3 3
3 4
3 5
4 4
4 5
*/

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/