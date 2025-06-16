/*
> Date Created: July 15, 2024
> Author: Ishaan Rastogi
> Purpose: To show if the number is prime or not
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;

//prime or not function
// 1 -> Prime no.
// 0 -> Not a Prime no.
bool isPrime (int n) {

    for ( int i = 2; i < n; i++) {
        if ( n%i == 0 ) {
            return 0;
        }
    }
    return 1;    
}

//main function
int main () {

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    
    if(isPrime(n)) {
       cout <<"A Prime number " <<endl;
    }
    else {
        cout<< "Not a prime number "<<endl;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/