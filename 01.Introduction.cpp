// Header file libraries:
#include <iostream> // Meaning: "input-output stream". Allows users to work with input and output objects.
#include <string> // Allows proper usage of strings in C++, since they are not a default data type themselves.

// using namespace std;
// Using 'std::<...>' for naming identifier is preferred.

int outputPrinting() {
    std::cout << "Output printing:";
    std::cout << "\nHello world!" << '\n';
    // '<<' is an insertion operation.
    
    std::cout << "Another string" << std::endl;
    // '\n' is preferred over 'endl'.

    return 0;
}

int variablesAndConstants() {
    std::cout << "\nVariables and Constants:";
    /* Single variable:
     Declaration:
        <type> <identifier>;
     Definition:
        <type> <identifier> = <value>;
     */
    int integer; // Declaration.
    integer = 1; // Definition.
    
    float decimal1 = 1.412312; // Up to 7 decimal digits.
    double decimal2 = 1.423523413; // Up to 14 decimal digits.
    
    char single_character = 'a'; // Using single quotes: ''.
    // If 'char' is assigned a positive integer value, its ASCII character will be represented.
    
    std::string multiple_characters = "aa"; // Using double quotes: "".
    
    bool boolean = true; // Boolean values: 'true' or 'false'.
    
    std::cout << "\nInt:\t" << integer << "\nFloat:\t" << decimal1 << "\nDouble:\t" << decimal2;
    std::cout << "\nChar:\t" << single_character << "\nString\t:" << multiple_characters << "\nBool:\t" << boolean;
    
    /* Multiple variables:
     Declaration:
        <type 1> <identifier 1>, <type 2> <identifier 2>, ...;
     Definition:
        <type 1> <identifier 1> = <value 1>, <type 2> <identifier 2> = <value 2>, ...;
     */
    int var1, var2, var3; // Declaration.
    var1 = 1; // Definitions:
    var2 = 2; //    ...
    var3 = 3; //    ...

    int var4 = 4, var5 = 5, var6 = 6; // Definition.

    std::cout << "\n\nVariables summed up:\t" << var1 + var2 + var3 + var4 + var5 + var6;
    
    const int constant = 4;
    // Constant value reassignment would raise an error, unlike with variables.
    std::cout << "\nConstant:\t" << constant;

    return 0;
}

int cinTest(){
    std::cout << "\n\nCin input test:";
    std::string inputData;
    std::cout << "\nInput any text: ";
    std::cin >> inputData;
    std::cout << "\nValue: " << inputData;

    return 0;
}

int getlineTest() {
    std::cout << "\n\nGetline input test:";
    std::string inputData;
    std::cout << "\nInput any text: ";
    std::getline(std::cin, inputData);
    std::cout << "\nValue: " << inputData;

    return 0;
}

int arithmeticOperators() {
    std::cout << "\n\nArithmetical Operators:";
    int value1 = 1;
    float value2 = 2.0;
    
    std::cout << "\nAddition:\t"  << value1 + value2;
    std::cout << "\nSubstraction:\t"  << value1 - value2;
    std::cout << "\nProduct:\t"  << value1 * value2;
    std::cout << "\nQuotient:\t"  << value1 / value2;
    std::cout << "\nRemainder:\t"  << value1 % 2; // Floats are not supported for this operand.
    std::cout << "\nIncrement:\t"  << ++value1;
    std::cout << "\nDecrement:\t" << --value1;

    return 0;
}

int assignmentOperators() {
    std::cout << "\n\nAssignment Operators:";
    
    int value = 2;
    std::cout << "\nValue = 2\t" << value;
    
    value += 1;
    std::cout << "\nValue += 1\t" << value;
    
    value -= 1;
    std::cout << "\nValue -= 1\t" << value;
    
    value *= 2;
    std::cout << "\nValue *= 2\t" << value;
    
    value /= 2;
    std::cout << "\nValue /= 2\t" << value;
    
    value %= 1;
    std::cout << "\nValue %= 1\t" << value;

    return 0;
}

void comparisonOperators() {
    std::cout << "\n\nComparison Operators:";
    int value1 = 1, value2 = 2;
    // The value returned by a comparison is always either '1' (true) or '0' (false).
    
    std::cout << "\nValue 1: " << value1 << "\tValue 2: " << value2;
    std::cout << "\nEqual to:\t" << (value1 == value2);
    std::cout << "\nDifferent from:\t" << (value1 != value2);
    std::cout << "\nGreater than:\t" << (value1 > value2);
    std::cout << "\nLower than:\t" << (value1 < value2);
    std::cout << "\nGreater or equal to:\t" << (value1 >= value2);
    std::cout << "\nLower or equal to:\t" << (value1 <= value2);
}

void logicalOperators() {
    std::cout << "\n\nLogical Operators:";
    
    std::cout << "\nNot true:\t" << (!true);
    std::cout << "\nTrue and False:\t" << (true && false);
    std::cout << "\nTrue or False:\t" << (true || false);
}

int strings() {
    std::cout << "\n\nStrings:";
    std::string str1 = "string 1 ", str2 = "string 2";
    
    std::cout << "\nConcatenation:\t" << str1 + str2; // or...
    str1.append(str2); // The 'append' method is much faster than the '+' operator.
    
    std::cout << "\nLength:\t" << str1.length(); // or...
    str1.size();
    
    std::cout << "\nElement access:\t" << str1[0];
    
    str1[0] = 'S';
    std::cout << "\nElement replacement:\t" << str1;

    return 0;
}

int main() {
    outputPrinting();
    variablesAndConstants();

    cinTest();
    // getlineTest(); // Executing both of these functions causes problems.

    arithmeticOperators();
    assignmentOperators();
    comparisonOperators();
    logicalOperators();

    strings();

    return 0;
}