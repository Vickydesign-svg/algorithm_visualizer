#include<iostream>
#include<ctime>

using namespace std;
#include "bubble_sort.h"
#include "selection_sort.h"

void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number to generate random numbers for sorting: ";
    cin >> n;

    //Generating random numbers
    srand(time(0));
    int A[n];
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 100;
    }

    //Original array
    cout << "\nBefore Sorting" << endl;
    printArray(A, n);

    //Choose an algorithm method
    selectionSort(A, n);
    //bubbleSort(A, n);

    cout << "\nAfter Sorting" << endl;
    printArray(A, n);

    return 0;
}
