#include <iostream>
using namespace std;


void addArrays(int arr1[], int arr2[], int result[], int size) {
    for(int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int size;

    
    cout << "Enter the size of the arrays: ";
    cin >> size;

    int arr1[size], arr2[size], result[size];

    
    cout << "Enter elements for the first array:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    
    cout << "Enter elements for the second array:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    
    addArrays(arr1, arr2, result, size);

    
    cout << "Resultant array after addition:\n";
    for(int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
