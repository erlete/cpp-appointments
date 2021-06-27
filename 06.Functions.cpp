#include <iostream>
#include <string>

using namespace std;

// Custom functions must be declared before the 'main' one.
// They can, however, be defined after 'main'.

int basic(int positionalParameter, int optionalParameter = 2);

void reference(int &x, int &y);

int power(int x, int y);

float power(float x, float y);

int functions() {
    cout << "Function 1 output:\n" << basic(12) << '\n';
    
    cout << "Function 2 output:\n";
    int a = 1, b = 2;
    cout << "A value:\t" << a << '\t' << &a << '\n' << "B value:\t" << b << '\t' << &b << '\n';
    reference(a, b);
    cout << "A value:\t" << a << '\t' << &a << '\n' << "B value:\t" << b << '\t' << &b << '\n';
    
    cout << "Functions 3, 4 output:\n";
    int val1 = 5, val2 = 3;
    cout << power(val1, val2) << '\n';
    int val3 = 5.5, val4 = 2.1;
    cout << power(val3, val4) << '\n';
    return 0;
}

int basic(int positionalParameter, int optionalParameter) {
    return positionalParameter * optionalParameter;
}

void reference(int &x, int &y) { // References are global, while identifiers are local.
    int temp = x;
    x = y;
    y = temp;
}

int power(int x, int y) {
    int accumulator = 1;
    for (int i = 0; i < y; i++) {
        accumulator *= x;
    }
    return accumulator;
}

float power(float x, float y) { // Very lame example of function overloading... anyway.
    float accumulator = 1;
    for (int i = 0; i < y; i++) {
        accumulator *= x;
    }
    return accumulator;
}
