/*
> Date Created: June 20, 2024
> Author: Ishaan Rastogi
> Purpose: To find out if a number is prime or composite.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = 1;

    for ( int i = 2 ; i < n ; i++) { // i <= n since we don't want to include the number itself.
        
        //rem = 0, Not a prime
        if (n % i == 0 ) {
        isPrime = 0;
        break; // break is used because if we find out a number is prime after few times, then why to divide furthermore.
        }
    }

    if ( isPrime == 0 ) {
        cout << n << " is a composite number." << endl;
    }

    else if ( n == 0 || n == 1) {
        cout << n << " is neither a prime number nor a composite number." << endl;
    }

    else {
        cout << n << " is a prime number." << endl;
    }

}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/