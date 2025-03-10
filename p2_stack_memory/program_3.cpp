#include <iostream>

using namespace std;

// Function declaration
void get_input(int &, int &); 
void add(int, int);
void multiply(int, int);
void divide(int, int); 

// Main function
int main() {
    // Variables declaration
    int a, b;

    // Get input
    get_input(a, b);

    // Calculate
    add(a, b);
    multiply(a, b);
    divide(a, b);

    return 0;
}

// Function definition
void get_input(int &a, int &b) {
    cout << "Enter two signed integers: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << endl;
}

void add( int a, int b) {
    int result = a + b;

    if((a > 0 && b > 0 && result < 0) || (a < 0 && b < 0 && result > 0)) {
        cout << "[E]rror: Overflow occurred." << endl;
    } else {
        cout << "a + b = " << result << endl;
    }
}

void multiply(int a, int b) {
    int result = a * b;

    if(a != 0 && (result / a != b)) {
        cout << "[E]rror: Overflow occurred." << endl;
    } else {
        cout << "a * b = " << result << endl;
    }
}

void divide(int a, int b) {
    if(b == 0) {
        cout << "[E]rror: Division by zero." << endl;
    } else if(a == (1 << 31) && b == -1) {
        cout << "[E]rror: Overflow occurred." << endl;
    } else {
        cout << "a / b = " << a / b << endl;
    }
}