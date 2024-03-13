#include <iostream>
#include <math.h>
using namespace std;

void ex1();
void ex2();
void ex3();
void ex4();

int main() {
    int choice;
    cout << "Enter tasks choice (1-4): ";
    cin >> choice;

    switch (choice) {
    case 1:
        ex1();
        break;
    case 2:
        ex2();
        break;
    case 3:
        ex3();
        break;
    case 4:
        ex4();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}

void ex1() {
    cout << "Task 1" << endl;
    int X[] = { 3, -5, 7, -2, 0, 4, -8, 10, -6, 1, -9, 12, -15, 20 };
    int M;
    int Y[14] = { 0 };
    int YSize = 0;

    cout << "Enter number M: ";
    cin >> M;

    cout << "M: " << M << endl;
    cout << "X array: ";
    for (int i = 0; i < 14; i++) {
        cout << X[i] << " ";
        if (abs(X[i]) > M) {
            Y[YSize++] = X[i];
        }
    }
    cout << endl;

    cout << "Y array: ";
    for (int i = 0; i < YSize; i++) {
        cout << Y[i] << " ";
    }
    cout << endl;
}

void ex2() {
    cout << "Task 2" << endl;
    int arr[] = { 3, -5, 7, -2, 0, 4, -8, 10, -6, 1, -9, 12, -15, 20 };

    cout << "Original array: ";
    for (int i = 0; i < 14; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 14; ++i) {
        if (arr[i] < 0) {
            arr[i] *= -1;
        }
    }

    cout << "Modified array: ";
    for (int i = 0; i < 14; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ex3() {
    cout << "Task 3" << endl;
    int bills[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int sum;
    int result[10] = { 0 };

    cout << "Enter the sum: ";
    cin >> sum;

    cout << "Resulting bills: ";
    for (int i = 0; i < 10; ++i) {
        while (sum >= bills[i]) {
            result[i]++;
            sum -= bills[i];
        }
        for (int j = 0; j < result[i]; ++j) {
            cout << bills[i] << " ";
        }
    }
    cout << endl;
}

void ex4() {
    int arr1[] = { 1, 3, 5, 7, 9 };
    int arr2[] = { 2, 4, 6, 8, 10 };
    int arr3[10];

    int index1 = 0, index2 = 0, index3 = 0;

    while (index1 < 5 && index2 < 5) {
        if (arr1[index1] < arr2[index2]) {
            arr3[index3++] = arr1[index1++];
        }
        else {
            arr3[index3++] = arr2[index2++];
        }
    }

    while (index1 < 5) {
        arr3[index3++] = arr1[index1++];
    }

    while (index2 < 5) {
        arr3[index3++] = arr2[index2++];
    }

    cout << "Merged array: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

