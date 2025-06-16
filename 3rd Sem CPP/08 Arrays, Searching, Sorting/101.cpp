/*
> Date Created: July 018, 2024
> Author: Ishaan Rastogi
> Purpose: To use function to carry out commands on array
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

    int second[9];
    printArr(second, 9);

    int third[8];
    printArr(third, 8);

    int fourth[7];
    printArr(fourth, 7);
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/