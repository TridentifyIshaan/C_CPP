/*
> Date Created: June 14, 2024
> Author: Ishaan Rastogi
> Purpose: To convert fahrenheit temp to celcius temp
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {
    float fahrenheit;
    cout << "Enter temp in Fahrenheit: ";
    cin >> fahrenheit;
    float celcius = (5.0/9) * ( fahrenheit - 32 );
    cout  << fahrenheit << "F = " << celcius << " C" << endl;

    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/