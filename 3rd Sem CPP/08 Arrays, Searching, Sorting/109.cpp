/*
> Date Created: July 029, 2024
> Author: Ishaan Rastogi
> Purpose: To print the sum of array elements
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

void sum ( int arr[], int n) {

    int total = 0;

    //printing the array
    for ( int i = 0; i < 5; i++) {
        total += arr[i];
    }
    cout << "The sum is " << total << endl;
}

int main () {

    int arr[5] = { 1, 2, 3, 4, 5};

    //calling the update function
    sum(arr, 5);
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/