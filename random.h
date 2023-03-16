#pragma once

#include <iostream>
#include <ctime>

using namespace std;

void GetRandomArray (int arr[], int size, int first, int last) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = first + rand() % (last - first);
        cout << arr[i] << " ";
    }
    cout << endl;
}