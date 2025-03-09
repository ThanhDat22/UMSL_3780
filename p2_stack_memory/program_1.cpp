#include <iostream>

using namespace std;

// Function declaration
int func_1(int);
int func_2(int);
int func_3(int);

// Main function
int main() {
    int num = 10;
    func_1(num);
    return 0;
}

// Function definition

int func_1(int a) {
    int x = a;
    return func_2(x);
}

int func_2(int b) {
    int y = b + 1;
    return func_3(y);
}

int func_3(int c) {
    int z = c + 1;
    cout << "The final value is: " << z << endl;
    return z;
}