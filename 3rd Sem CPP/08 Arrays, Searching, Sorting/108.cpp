/*
> Date Created: July 029, 2024
> Author: Ishaan Rastogi
> Purpose: To showcase concept of array updating at both positions
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

// The concept is that we are copy the address of array element from main to void not the array element itself
// Hence the resultant output arrays will be same, i.e., 120 2 3

void update ( int arr[], int n) {

    cout << endl << "Inside the function" << endl;

    //updating the array
    arr[0] = 120;

    //printing the array
    for ( int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Going back to the main function" << endl;
}

int main () {

    int arr[3] = { 1, 2, 3};

    //calling the update function
    update(arr, 3);

    //printing the array
    for ( int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}











/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/