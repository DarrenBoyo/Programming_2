#include <iostream>
#include <string>
using namespace std;

template <typename T>
int binarySearch(const T list[], T key, int listSize)
{
    int low = 0;
    int high = listSize - 1;
    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }
    return -low - 1;
}

int main()
{

    int intArray[] = {1, 3, 5, 7, 9, 11};
    int intKey = 7;
    int intIndex = binarySearch(intArray, intKey, 6);
    cout << "Index of " << intKey << " in intArray: " << intIndex << endl;

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double doubleKey = 4.4;
    int doubleIndex = binarySearch(doubleArray, doubleKey, 5);
    cout << "Index of " << doubleKey << " in doubleArray: " << doubleIndex << endl;

    string stringArray[] = {"apple", "banana", "cherry", "date", "fig"};
    string stringKey = "cherry";
    int stringIndex = binarySearch(stringArray, stringKey, 5);
    cout << "Index of \"" << stringKey << "\" in stringArray: " << stringIndex << endl;

    return 0;
}
