#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 100;
const string filename = "numbers.txt";

void generateFile() {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        outFile << (rand() % 1000) << " ";
    }

    outFile.close();
}


int readFile(int arr[]) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 0;
    }

    int count = 0;
    while (count < SIZE && inFile >> arr[count]) {
        count++;
    }

    inFile.close();
    return count;
}

    void writeFile(int arr[], int count) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        outFile << arr[i] << " ";
    }

    outFile.close();
}

int main() {
    generateFile();

    int numbers[SIZE];
    int count = readFile(numbers);

    if (count > 0) {
        sort(numbers, numbers + count);

        writeFile(numbers, count);

        cout << "Sorting complete! Check " << filename << " for sorted numbers." << endl;
    } else {
        cout << "No numbers read from file!" << endl;
    }

    return 0;
}
