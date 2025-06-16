/*

This note will be available only on first file of each folder present in folder C++ .
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C++ Language.
Author has made these programmes as a reference using courses of CodingHelp - By Babbar, while himself learning C++ Language for the first time.

/*
> Date Created: June 19, 2024
> Author: Ishaan Rastogi
> Purpose: To show binary number operations via AND, OR, NOT, XOR operators
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Topic -

AND &
OR |
NOT ~

If a = 2, then ~a = -3 not -2 because first left position will be for showcasing the sign, 0 means +ve, 1 means -ve. { Concept of signed integer } Eg- Take value of 2 excluding the first position then calculate it's 1st compliment then calculate it's 2nd compliment by adding 1 to the 1st compliment. That will be the integer value, and the first position will showcase the sign according to the above statement.

XOR ^

XOR means if any pair has only one 1, then it will show case 1. Eg- The truth table of XOR is as follows:

a | b = c
0   0   0
1   0   1
0   1   1
1   1   0

Binary Number systems:

0       0000
1       0001
2       0010
3       0011
4       0100
5       0101
6       0110
7       0111
8       1000
9       1001
A       1010
B       1011
C       1100
D       1101
E       1110
F       1111

*/

#include <iostream>
using namespace std;

int main () {
    int a = 4, b = 6;

    cout << "a&b will be " << (a&b) << endl;
    cout << "a|b will be " << (a|b) << endl;
    cout << "~a will be " << ~a << endl;
    cout << "a^b will be " << (a^b) << endl;

}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/