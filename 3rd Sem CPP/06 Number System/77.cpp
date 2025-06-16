/*
> Date Created: June 26, 2024
> Author: Ishaan Rastogi
> Purpose: To convert binary number to decimal
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

    int i = 0, ans = 0;

    while (n != 0) {
        int bit = n % 10; // Geting remainder
        if ( bit == 1 ) {
            ans += pow(2,i);
        }

        n = n/10; // changing value of n to the next divisible of n by 10
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