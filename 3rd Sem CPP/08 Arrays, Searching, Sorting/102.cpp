/*
> Date Created: July 018, 2024
> Author: Ishaan Rastogi
> Purpose: To find size of array
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
using namespace std;

void printArr(int arr[], int size) {

    cout << "The array is [ ";

    //printing the array
    for ( int i = 0; i < size; i++) {
        cout << arr[i]  << ", ";
    }
    cout << "]" << endl;
}

int main () {

    int first[10];
    printArr(first, 10);

    int firstSize = sizeof(first)/sizeof(int);
    cout << "Size of the array is " << firstSize << endl;
    
    //basically sizeof(first) will turn out to be 40 as 4 bits each for each location, so we have to divide it by 4 to get the desired solution. Hence, sizeof(int) denotes 4 as 4 bits for and integer type
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/