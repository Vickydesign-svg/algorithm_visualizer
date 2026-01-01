#include<iostream>

using namespace std;

#include "selection_sort.h"

//Selection Sort function
void selectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        //Find the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }
        //Swap the smallest element with A[i]
        if (minIndex != i) {
            int temp = A[minIndex];
            A[minIndex] = A[i];
            A[i] = temp;
        }
        // Print of array after each pass
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << A[k] << " ";
        }
        cout << endl;
    }
}

