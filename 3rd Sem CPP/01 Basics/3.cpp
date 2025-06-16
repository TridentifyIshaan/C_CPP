/*
> Date Created: October 14, 2023
> Author: Ishaan Rastogi
> Purpose: To print out size of a datatype
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main ()
{
    int a = 123;
    cout << a << endl ;
    
    int size = sizeof(a);
    cout << "Size of a is" << size << endl;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/