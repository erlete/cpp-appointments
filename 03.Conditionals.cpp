#include <iostream>

using namespace std;

int main() {
    int c1 = 10, c2 = 20;
    
    // Basic conditionals:
    if (c1 > c2) {
        cout << "c1 is greater than c2\n";
    } else if (c2 > c1) {
        cout << "c2 is greater than c1\n";
    } else {
        cout << "c2 is equal to c1\n";
    }
    
    // Ternary conditionals:
    c1 > c2 ? cout << "c1 is greater than c2" : cout << "c2 is greater than c1";
    
    // Switch cases:
    switch (c1) {
        case 20:
            cout << "c1 value is 20";
            break;
        case 30:
            cout << "c1 value is 30";
            break;
        default:
            cout << "c1 value is not 20 nor 30";
    }
    return 0;
}
