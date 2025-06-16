/*
> Date Created: July 15, 2024
> Author: Ishaan Rastogi
> Purpose: To show combination of numbers ( nCr )
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;

//function to calculate factorial
int fact (int n) {

    int fact = 1;
    for ( int i = 1; i <= n; i++ ) {
        fact *= i;
    }
    return fact;
}

//function to calculate nCr
int nCr ( int n, int r) {
    
    int ans = ( fact(n) / ( fact(r) * fact(n-r) ) );
    return ans;
}

//main function wherre we take input & print output and call out the functions to run them.
int main () {
    
    int n, r;
    cout << "Enter valeus of n & r respectively." << endl;
    cin >> n >> r;
    cout << "Answer is " << nCr ( n, r) << endl;

}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/