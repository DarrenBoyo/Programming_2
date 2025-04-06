#include <iostream>
#include <string>

using namespace std;

template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int intArray[] = {1, 5, 3, 9, 2};
    cout << "Max in int array: " << findMax(intArray, 5) << endl;

    double doubleArray[] = {3.2, 4.5, 1.1, 7.6, 2.8};
    cout << "Max in double array: " << findMax(doubleArray, 5) << endl;

    string stringArray[] = {"8", "88", "89", "12"};
    cout << "Max in string array: " << findMax(stringArray, 4) << endl;

    return 0;
}
