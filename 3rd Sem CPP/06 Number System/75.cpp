/*

This note will be available only on first file of each folder present in folder C++ .
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C++ Language.
Author has made these programmes as a reference using courses of CodingHelp - By Babbar, while himself learning C++ Language for the first time.

/*
> Date Created: June 25, 2024
> Author: Ishaan Rastogi
> Purpose: To convert decimal number to binary ( only for positive numbers because negative numbers will take a lot of binary digits )
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    float ans = 0; //by using int, it is having problem. The reason, I think is sicne it is for decimal to binary we will be needing float.
    int i = 0;
    while ( n != 0 ) {
        int bit = n & 1;
        ans += (bit * pow(10,i));

        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/