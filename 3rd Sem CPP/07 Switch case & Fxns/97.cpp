/*
> Date Created: July 17, 2024
> Author: Ishaan Rastogi
> Purpose: Problem 3
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;

int update ( int a ) {

    int ans = a*a;
    return ans; //Somehow this doesn't get shown, IDK why
}

int main () {

    int a = 14;
    a = update(a); //assigned
    cout << a << endl;
}

// Output - 196

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/