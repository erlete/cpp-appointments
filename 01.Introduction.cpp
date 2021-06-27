#include <iostream> // "input-output stream".
// Header file library: allows the user to work with input and output objects, such as 'cout'.

#include <string> // "strings".

using namespace std; // Allows usage of names for objects and variables from standard library.

void basics() { // Main function:
    cout << "Hello world";
    // 1. If 'using namespace std' was not declared, 'cout' (/see-out/) must've been written as 'std::cout'.
    // 2. '<<' is an insertion operation.
    
    cout << "\nAnother string" << endl;
    // 3. '\n' is preferred over 'endl'.
}

void variablesAndConstants() {
    /* Single variable:
     Declaration:
        <type> <identifier>;
     Definition:
        <type> <identifier> = <value>;
     */
    int integer;
    integer = 1;
    
    float decimal1 = 1.0; // Up to 7 decimal digits.
    
    double decimal2 = 1E4; // Up to 14 decimal digits.
    
    char single_character = 'a'; // ''
    // If 'char' is assigned a positive integer value, its ASCII character will be represented.
    
    string multiple_characters = "aa"; // ""
    
    bool boolean = true; // 'true' / 'false'
    
    cout << integer << decimal1 << decimal2 << single_character << multiple_characters << boolean;
    
    /* Multiple variables:
     Declaration:
        <type 1> <identifier 1>, <type 2> <identifier 2>, ...;
     Definition:
        <type 1> <identifier 1> = <value 1>, <type 2> <identifier 2> = <value 2>, ...;
     */
    int var1, var2, var3;
    var1 = 1;
    var2 = 2;
    var3 = 3;
    
    int var4 = 4, var5 = 5, var6 = 6;
    
    cout << var1 + var2 + var3 + var4 + var5 + var6;
    
    const int constant = 4;
    // Constant value reasignment would raise an error, unlike variables.
    
    cout << constant;
}

void cinInput(){
    string inputData;
    cout << "Please input text: ";
    cin >> inputData;
    cout << "\nValue: " << inputData;
}

void getLineInput() {
    string inputData;
    cout << "Please input text: ";
    getline(cin, inputData);
    cout << "\nValue: " << inputData;
}

void arithmeticOperators() {
    int value1 = 1;
    float value2 = 2.0;
    
    float addition = value1 + value2;
    cout << addition;
    
    float substraction = value1 - value2;
    cout << substraction;
    
    float product = value1 * value2;
    cout << product;
    
    float quotient = value1 / value2;
    cout << quotient;
    
    float remainder = value1 % 2; // Floats are not supported for this operand.
    cout << remainder;
    
    int increment = ++value1;
    cout << increment;
    
    int decrement = --value1;
    cout << decrement;
}

void assignmentOperators() {
    // Basic:
    
    // Normal assignment:
    int value1 = 2;
    
    // Addition assignment:
    value1 += 1;
    
    // Substraction assignment:
    value1 -= 1;
    
    // Product assignment:
    value1 *= 2;
    
    // Quotient assignment:
    value1 /= 2;
    
    // Remainder assignment:
    value1 %= 1;
    
    // Boolean:
    
    //
    value1 &= 1;
    
    //
    value1 |= 1;
    
    //
    value1 ^= 1;
    
    //
    value1 >>= 1;
    
    //
    value1 <<= 1;
}

void comparisonOperators() {
    int value1 = 1, value2 = 2;
    // The value returned by a comparison is always either '1' (true) or '0' (false).
    
    // Equal to:
    cout << (value1 == value2);
    
    // Different from:
    cout << (value1 != value2);
    
    // Greater than:
    cout << (value1 > value2);
    
    // Lower than:
    cout << (value1 < value2);
    
    // Greater or equal to:
    cout << (value1 >= value2);
    
    // Lower or equal to:
    cout << (value1 <= value2);
}

void logicalOperators() {
    bool t = true, f = false;
    
    // Not:
    cout << (!t);
    
    // And:
    cout << (t && f);
    
    // Or:
    cout << (t || f);
}

void strings() {
    string str1 = "string 1 ", str2 = "string 2";
    
    // String concatenation:
    cout << str1 + str2;
    // or:
    cout << str1.append(str2); // The 'append' method is much faster than the '+' operator.
    
    // String length:
    cout << str1.length();
    // or:
    cout << str1.size();
    
    // Index access:
    cout << str1[0];
    
    // Index replacement:
    str1[0] = 'S';
    cout << str1;
}
