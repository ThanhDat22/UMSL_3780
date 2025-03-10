#include <iostream>

using namespace std;

// Function declaration
void exam_memory();

// Main function
int main() {
    exam_memory();
    return 0;
}

// Function definition
void exam_memory() {
    // Static allocation of memory
    int a[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(a) / sizeof(a[0]);

    // Dynamic allocation of memory
    int * dynamic_array = new int[size];
    for(size_t i = 0; i < size; i++) {
        dynamic_array[i] = a[i] * 10;
    }

    // Print
    cout << "Static array address: " << a << endl;
    cout << "Dynamic array address: " << dynamic_array << endl;

    for(size_t i = 0; i < size; i++) {
        cout << "Static array value: " << a[i] << endl;
        cout << "Dynamic array value: " << dynamic_array[i] << endl;
    }

    

    // Free memory
    delete[] dynamic_array;
}
