#include <iostream>
#include <string>

using namespace std;

int main() {
    string var = "Variable";
    
    // Reference operator:
    string &ref = var;
    cout << var << '\n' << ref << '\n';
    
    // Memory address:
    cout << var << '\n' << &var << '\n';
    
    // Pointer definition:
    string* varp = &var;
    cout << varp << '\n' << &varp << '\n';
    
    // Dereference operator:
    cout << varp << '\n' << *varp << '\n';
    
    // Note: pointer modification:
    // &ref = "Modified variable"; does not work.
    *varp = "Modified variable";
    cout << varp << '\n' << *varp << '\n';
    return 0;
}
