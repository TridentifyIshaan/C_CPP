/*
> Date Created: July 10, 2024
> Author: Ishaan Rastogi
> Purpose: To show if a number is even or odd using user-created function
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;


//Output - 1 in case of Even ; 0 in case of Odd
bool isEven ( int a ) {
    //odd
    if ( a&1 ) {
        return 0;
    }    
    //out of the if loop - can be used without using else
    return 1;
}

int main()
{
    int n;
    cout << "Enter a number :" << endl;
    cin >> n;

    if ( isEven(n) ) {
        cout << "Number is even!" << endl;
    }
    else {
        cout << "Number is odd!" << endl;
    }
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/