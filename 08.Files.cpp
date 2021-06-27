#include <iostream>
#include <fstream> // File stream.
#include <string>

using namespace std;

int files() {
    ofstream writeFile("test_file.txt");
    writeFile << "Added another string line to the test_file.";
    writeFile.close();
    
    string text;
    ifstream readFile("test_file.txt");
    while (getline (readFile, text)) {
        cout << text;
    };
    readFile.close();
    
    return 0;
}
