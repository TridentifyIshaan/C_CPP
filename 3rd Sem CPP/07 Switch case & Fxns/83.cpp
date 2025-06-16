/*
> Date Created: July 09, 2024
> Author: Ishaan Rastogi
> Purpose: To calculate the amount of notes of ₹1 , 20, 50, 100 to collect ₹1330
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

int main () {
    
    int totalMoney = 1330;

    // a, b, c and d are respectively the number of notes of ₹1 , 20, 50, 100 required to collect ₹1330.

    int a = totalMoney/100;
    totalMoney = totalMoney%100;
    
    int b = totalMoney/50;
    totalMoney = totalMoney%50;

    int c = totalMoney/20;
    totalMoney = totalMoney%20;

    int d = totalMoney/1;

    int n = 100;

    switch (n) {

        case 100: cout << "The number of notes of Rs. 100: " << a <<endl;
                
        case 50: cout << "The number of notes of Rs. 50: " << b <<endl;
    
        case 20: cout << "The number of notes of Rs. 20: " << c <<endl;
    
        case 1: cout << "The number of notes of Rs. 1: " << d <<endl;
                break;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/