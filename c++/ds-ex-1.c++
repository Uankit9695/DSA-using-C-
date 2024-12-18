#include <iostream>

const int MAX_SIZE = 100; // Maximum size of the linear array

// Function to display the current elements in the array
void displayArray(int arr[], int size) {
    std::cout << "Current Array Elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to insert an element at the end of the array
void insertAtEnd(int arr[], int &size, int element) {
    if (size < MAX_SIZE) {
        arr[size++] = element;
        std::cout << "Element " << element << " inserted at the end." << std::endl;
    } else {
        std::cout << "Array is full. Cannot insert element." << std::endl;
    }
}

// Function to insert an element at a given position in the array
void insertAtPosition(int arr[], int &size, int element, int position) {
    if (size < MAX_SIZE && position >= 0 && position <= size) {
        for (int i = size; i > position; --i) {
            arr[i] = arr[i - 1]; // Shift elements to make space for the new element
        }
        arr[position] = element;
        size++;
        std::cout << "Element " << element << " inserted at position " << position << "." << std::endl;
    } else {
        std::cout << "Invalid position or array is full. Cannot insert element." << std::endl;
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Display Array\n";
        std::cout << "2. Insert Element at End\n";
        std::cout << "3. Insert Element at Position\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2:
                int elementToAdd;
                std::cout << "Enter the element to insert at the end: ";
                std::cin >> elementToAdd;
                insertAtEnd(arr, size, elementToAdd);
                break;
            case 3:
                int positionToAdd, elementToAddAtPos;
                std::cout << "Enter the position to insert the element: ";
                std::cin >> positionToAdd;
                std::cout << "Enter the element to insert at position " << positionToAdd << ": ";
                std::cin >> elementToAddAtPos;
                insertAtPosition(arr, size, elementToAddAtPos, positionToAdd);
                break;
            case 4:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
