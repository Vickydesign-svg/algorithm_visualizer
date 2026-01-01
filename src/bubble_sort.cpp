#include<iostream>


using namespace std;
#include "bubble_sort.h"

//Bubble Sort function
void bubbleSort(int A[], int n) {
    //Outer loop: number of passes
    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << i + 1 << ": ";

        //Inner loop: compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
        //Swap if out of order
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    //Print of array after each pass
        for (int k = 0; k < n; k++) {
            cout << A[k] << " ";
        }
        cout << endl;
    }
}
