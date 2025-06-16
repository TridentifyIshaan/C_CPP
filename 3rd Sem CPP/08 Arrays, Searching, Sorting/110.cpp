/*
> Date Created: July 029, 2024
> Author: Ishaan Rastogi
> Purpose: To search an element in the array by linear search
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

bool search ( int arr[], int n, int key) {
    
    for ( int i = 0; i < n; i++) {
        if ( arr[i] == key ) {
            return 1; //Return something
        }
    }
    return 0; //Returning nothing
}

int main () {

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    cout << "Enter the key which you want to search :" << endl;
    int key;
    cin >> key;

    // calling the function
    bool found = search( arr, 10, key);

    if ( found ) {
        cout << "Key is found!" << endl;
    }
    else {
        cout << "Key is not found" << endl;
    }
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/