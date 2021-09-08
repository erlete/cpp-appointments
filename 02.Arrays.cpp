#include <iostream>
#include <string>
#include <array>

int main() {
    std::cout << "Arrays:";
    // Array definition (with size):
    int array[2] = {1, 2};
    std::cout << "\nElements:";
    for (int i = 0; i < sizeof(array); i++) {
        std::cout << "\n\tElement " << i << ": " << array[i];
    }
    
    // Element redefinition:
    array[0] = 3;
    std::cout << array[0] << array[1];
    
    // Array definition (without size):
    int array2[] = {1, 2, 3, 4};
    // If more elements have to be added to the array, it will have to be completely redefined.
    std::cout << array2;
    
    return 0;
}
