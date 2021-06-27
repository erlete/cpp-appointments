#include <iostream>
#include <string>

using namespace std;

//-------------------------

class Test {
public:
    int id;
    string name;
    
    void getter() {
        cout << "\nObject:" << "\n\tID:\t\t" << id << "\n\tName:\t" << name << '\n';
    };
    void getter2();
};

void Test::getter2() {
    cout << "\nObject:" << "\n\tID:\t\t" << id << "\n\tName:\t" << name << '\n';
}

class Constructor {
public:
    int id;
    string name;
    
    Constructor(int x, string y) { // Same identifier as the class itself and always public.
        id = x;
        name = y;
        // The constructor is always a void method.
    };
    void getter() {
        cout << "\nObject:" << "\n\tID:\t\t" << id << "\n\tName:\t" << name << '\n';
    }
};

// The constructor can be defined outside the class too: 'Constructor::Constructor(...)'.

//-------------------------

class Access{
    // Attributes defined directly below the class declaration are private.
    // It is recommended that as many attributes as possible are private in order to prevent code manipulation.
    int privateAttribute1;
public:
    int publicAttribute;
protected:
    int protectedAttribute;
private:
    int privateAttribute;
};

//-------------------------

int main() {
    // Instance creation:
    Test object;
    object.id = 87123;
    object.name = "Testing";
    object.getter();
    object.getter2();
    
    Constructor object2(78293, "More testing");
    object2.getter();
    
    Access object3;
    cout << object3.publicAttribute;
    // 'object3.protectedAttribute;' cannot be accessed.
    // 'object3.privateAttribute;' cannot be accessed.
    
    return 0;
}
