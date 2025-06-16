/*
> Date Created: July 02, 2024
> Author: Ishaan Rastogi
> Purpose: To create mini calculator
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

int main () {
    
    float a, b;
    
    cout << "Enter the value of a: " <<endl;
    cin >> a;
    
    cout << "Enter the value of b: " <<endl;
    cin >> b;

    char op;
    cout << "Enter the operator: " << endl;
    cin >> op;

    switch (op) {

        case '+': cout << "Sum: a+b = " << a+b << endl; 
                break;
        case '-': cout << "Difference: a-b = " << a-b << endl;
                break;
        case '*': cout << "Product: a*b = " << a*b << endl;
                break;
        case '/': cout << "Quotient: a/b = " << a/b << endl;
                break;
        default: cout<< "Please enter a valid operator";
                break;

    }

}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/