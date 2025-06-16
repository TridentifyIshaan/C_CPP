/*
> Date Created: July 09, 2024
> Author: Ishaan Rastogi
> Purpose: To create power function and calculate power without the in-built power function
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<iostream>
using namespace std;

int power(int num1, int num2) {

    int ans = 1;

    for(int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }
    return ans;
}

int main()
{
    int a , b;
    cout << "Enter the numbers :" << endl;
    cin>> a >> b;

    int answer = power(a,b);
    cout << "Answer is " << answer << endl;

    int c , d;
    cout << "Enter the numbers :" << endl;
    cin>> c >> d;

    answer = power(c,d);
    cout << "Answer is " << answer << endl;

    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/