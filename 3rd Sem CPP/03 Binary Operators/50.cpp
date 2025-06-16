/*
> Date Created: June 19, 2024
> Author: Ishaan Rastogi
> Purpose: To show binary number operations via 'Left & Right' shift operators
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Topic -

Left shift operator -

5 << 1 -> Shift 5 one time to the left
Change every bit to one time left

5 = 0000...0101
5 << 1 = 0000...01010 = 10

Right shift operator -

5 >> 4 -> Shift 5 four times to the right
Change every bit to 4 times right

5 = 0000...00000101 // 0101 these 4 digits vanish to the right.
5 >> 4 = 0000....0000 = 0

NOTE- Every time padding happens via number 0 for positive numbers, padding means filling the empty space here, just like Web Dev.
For negative numbers, padding is dependent on compiler.

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
10      1010
11      1011
12      1100
13      1101
14      1110
15      1111

*/

#include <iostream>
using namespace std;

int main () {
    int a = 4, b = 6;

    cout << "5 << 1 is equal to " << (5 << 1) << endl;
    cout << "5 >> 4 is equal to " << (5 >> 4) << endl;

}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/