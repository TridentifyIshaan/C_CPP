/*
> Date Created: June 26, 2024
> Author: Ishaan Rastogi
> Purpose: To convert decimal number to binary ( for negative numbers )
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Not Working

*/

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    long long int n; //making it quite long
    cout << "Enter a number: ";
    cin >> n;

    //making them long too
    unsigned long long int i = 0; 
    unsigned long long int ans = 0; // since long long float doesn't exist, we are not able to use float. Hence output will be wrong.
    
    // Condition for negative number
    if ( n < 0 ) {
        n += pow (2,16); 
    }
    
    cout << n << endl;

    while (n) {
        int bit = n & 1;
        ans += (bit * pow(10,i));

        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;
    return 0;
}
/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/