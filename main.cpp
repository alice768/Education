//Абрамова Алиса Григорьевна
//1. Сделать заголовочный файл с некоторыми математическими функциями.
//2. Сделать заголовочный файл с функциями по разделению массива на 2 части.
//3. Сделать программу, которая показывала бы работу функций из ваших заголовочных файлов.
//4*. Выложить результаты на GitHub.

#include <iostream>
#include "random.h"
#include "math.h"
#include "split.h"

using namespace std;
int main() {
    int N = 8;
    int array[N], arr1[N/2], arr2[N/2], arr3[N/2], arr4[N/2];
    cout << "Demonstration of sum function work - " << Sum(6,60) << endl;
    cout << "Demonstration of divide function work - " << Divide(60,6) << endl;
    cout << "Demonstration of multiply function work - " << Multiply(6,6) << endl;
    cout << "Demonstration of array splitting functions:" << endl;
    cout << "Random array:" << endl;
    GetRandomArray(array,N,7,60);
    cout << "Dividing the array into two arrays depending on the element index (even and uneven):" << endl;
    EvenUnevenArray(array, N, arr1, arr2);
    cout << "Dividing the array into two halves:" << endl;
    HalfArray(array, N, arr3, arr4);
    return 0;
}
