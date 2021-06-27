#include <iostream>

using namespace std;

void loops() {
    int var = 0;
    
    // While loop:
    while (var <= 10) {
        cout << "[W] Variable value: " << var << '\n';
        ++var;
    }
    
    var = 0;
    // Do-while loop:
    do {
        cout << "[D] Variable value: " << var << '\n';
        var++;
    } while (var > 1 && var <= 10);
    
    // For loops:
    for (int i = 0; i <= 10; i++) {
        // Statement 1 is executed (one time) before the execution of the code block.
        // Statement 2 defines the condition for executing the code block.
        // Statement 3 is executed (every time) after the code block has been executed.
        cout << "[F] Variable value: " << i << '\n';
    }
    
    // Keywords: 'break', 'continue'.
}
