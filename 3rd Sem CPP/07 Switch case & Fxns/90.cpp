/*
> Date Created: July 15, 2024
> Author: Ishaan Rastogi
> Purpose: To find nth term of AP : 3*n + 7;
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;

//function to calculate AP
int AP (int n) {

    int AP = 3*n + 7;
    return AP;
}

//main function
int main () {

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "nth term of 'AP: 3*n + 7' is " << AP(n);

}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/