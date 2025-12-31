#include<iostream>
#include<ctime>

using namespace std;

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
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";

    bubbleSort(A, n);

    cout << "\nAfter Sorting" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
