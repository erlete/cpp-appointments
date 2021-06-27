#include <iostream>

using namespace std;

void arrays() {
    // Array definition (with size):
    int array[2] = {1, 2};
    cout << array[0] << array[1];
    
    // Element redefinition:
    array[0] = 3;
    cout << array[0] << array[1];
    
    // Array definition (without size):
    int array2[] = {1, 2, 3, 4};
    // If more elements have to be added to the array, it will have to be completely redefined.
    cout << array2;
}
