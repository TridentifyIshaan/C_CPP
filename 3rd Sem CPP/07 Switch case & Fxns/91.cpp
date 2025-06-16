/*
> Date Created: July 15, 2024
> Author: Ishaan Rastogi
> Purpose: To count total no. of set bits ( bit = 1 ) in a & b
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;

// recursive function to count set bits
int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
    else
        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
}
 
// main function for calling
int main()
{
    int a, b;
    cout << "Enter the number:" << endl;
    cin >> a >> b;
    // function calling
    cout << "Total no. of set bits are " << (countSetBits(a) + countSetBits(b)) << endl;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/