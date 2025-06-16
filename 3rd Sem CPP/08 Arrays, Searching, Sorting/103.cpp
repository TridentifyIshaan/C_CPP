/*
> Date Created: July 018, 2024
> Author: Ishaan Rastogi
> Purpose: To show character array
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

void printArr(char arr[], int size) {

    cout << "The array is [ ";

    //printing the array
    for ( int i = 0; i < size; i++) {
        cout << arr[i]  << ", ";
    }
    cout << "]" << endl;
}

int main () {

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    //cout << "The char array is " << ch << endl;
    printArr(ch, 5);

}

//Similar arrays can be created for double, float, bool

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/