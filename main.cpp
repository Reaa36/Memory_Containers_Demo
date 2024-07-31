#include <iostream>
#include <vector>
#include <memory>
#include <map>

using namespace std;


int* allocateAndFillArray(int size) {

    int* array = new int[size];

    for (int i = 0; i < size; ++i) {
        array[i] = i * i;
    }

    return array;
}

void localMemoryExample() {

    int localArray[10];

    for (int i = 0; i < 10; ++i) {
        localArray[i] = i + 1;
    }


    cout << "Local array values:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << localArray[i] << " ";
    }
    cout << endl;
}

void dynamicMemoryExample(int size) {

    int* dynamicArray = allocateAndFillArray(size);

    cout << "Dynamic array values:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    delete[] dynamicArray;
}

void vectorExample(int size) {
    vector<int> vec(size);

    for (int i = 0; i < size; ++i) {
        vec[i] = i * i;
    }

    cout << "Vector values:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void uniquePtrExample(int size) {

    unique_ptr<int[]> uniqueArray(new int[size]);

    for (int i = 0; i < size; ++i) {
        uniqueArray[i] = i * i;
    }


    cout << "Unique_ptr array values:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << uniqueArray[i] << " ";
    }
    cout << endl;


}


void modifyArrayByReference(int (&array)[10]) {
    for (int i = 0; i < 10; ++i) {
        array[i] *= 2;
    }
}

void referenceExample() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Array before modification:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;


    modifyArrayByReference(array);

    cout << "Array after modification:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void mapExample() {

    map<string, int> myMap;

    myMap["apple"] = 5;
    myMap["banana"] = 3;
    myMap["orange"] = 7;

    cout << "Map values:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    myMap["apple"] = 10;

    cout << "Map values after modification:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << " => " << pair.second << endl;
    }
}

int main() {

    localMemoryExample();


    int size;
    cout << "Enter the size of the dynamic array: ";
    cin >> size;
    dynamicMemoryExample(size);

    vectorExample(size);

    uniquePtrExample(size);

    referenceExample();

    mapExample();

    return 0;
}
