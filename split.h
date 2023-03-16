#pragma once

#include <iostream>

using namespace std;

void EvenUnevenArray (int arr[], int size, int arr_even[], int arr_uneven[]) {
    for (int i = 0, j = 0; i < size; i += 2, j++) {
        arr_even[j] = arr[i];
        cout << arr_even[j] << " ";
    }
    cout << endl;
    for (int i = 1, j = 0; i < size; i += 2, j++) {
        arr_uneven[j] = arr[i];
        cout << arr_uneven[j] << " ";
    }
    cout << endl;
}

void HalfArray (int arr[], int size, int first_half[], int second_half[]) {
    for (int i = 0; i < size/2; i++) {
        first_half[i] = arr[i];
        cout << first_half[i] << " ";
    }
    cout << endl;
    for (int i = size/2, j = 0; i < size; i++, j++) {
        second_half[j] = arr[i];
        cout << second_half[j] << " ";
    }
    cout << endl;
}
