#include <iostream>
#include <string>

using namespace std;

class Encapsulation {
    // Objective: prevent sensitive data access.
    // Some attributes can be accessed through getter and setter methods.
private:
    int id;
public:
    void idSetter(int value) {
        id = value;
    };
    
    int idGetter() {
        return id;
    };
};

class OtherClass {
protected:
    int anotherID = 5;
public:
    int anotherIdGetter() {
        return anotherID;
    };
};

class Inheritance: public Encapsulation, public OtherClass {
public:
    int otherID = 10;
};

class Polymorphism: public OtherClass {
public:
    string anotherIdGetter() {
        return "This method has been modified through polymorphism.";
    };
};

int classes() {
    cout << "Encapsulation\n";
    Encapsulation obj1;
    obj1.idSetter(12);
    cout << "ID:\t" << obj1.idGetter() << '\n';
    
    cout << "Inheritance\n";
    Inheritance obj2;
    obj2.idSetter(12);
    cout << "ID:\t" << obj2.idGetter() << '\n';
    cout << "OtherID:\t" << obj2.otherID << '\n';
    // 'obj2.anotherID' cannot be accessed directly (protected).
    cout << "AnotherID:\t" << obj2.anotherIdGetter() << '\n';
    
    cout << "Polymorphism\n";
    Polymorphism obj3;
    cout << "ID:\t" << obj2.idGetter() << '\n';
    cout << "OtherID:\t" << obj2.otherID << '\n';
    cout << "AnotherID:\t" << obj3.anotherIdGetter() << '\n';
    
    return 0;
}
