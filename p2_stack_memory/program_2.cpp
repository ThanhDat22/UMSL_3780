#include <iostream>
#include <vector>


using namespace std;

// Function declaration
void exam_memory();

// Main function


// Function definition
void exam_memory() {
    // Static allocation of memory
    int a[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(a) / sizeof(a[0]);

    // Dynamic allocation of memory
    vector<int> v;
    for(size_t i = 0; i < size; i++) {
        v.push_back(a[i] * 10);
    }

    // Print
    cout << "Static array address: " << a << endl;
    cout << "Dynamic array address: " << v.data() << endl;

    for(size_t i = 0; i < v.size(); i++) {
        cout << "Static array value: " << a[i] << endl;
        cout << "Dynamic array value: " << v.at(i) << endl;
    }
}

int main() {
    exam_memory();
    return 0;
}