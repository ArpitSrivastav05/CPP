#include<bits/stdc++.h>
using namespace std;

/*static member and method --> A static member is a member of a class that is shared by all objects of the class. It means that the static member is not tied to any specific object of the class, but rather to the class itself.
 A static method is a method that can be called on the class itself, rather than on an object of the class. It means that the static method can be called without creating an object of the class.*/

class MyClass {
public:
    static int staticMember; // Static member variable

    static void staticMethod() { // Static method
        cout << "Static method called. Static member value: " << staticMember << endl;
    }
};

int MyClass::staticMember = 0; // Initialize static member variable
int main() {
    MyClass::staticMember = 10; // Accessing static member without creating an object
    MyClass::staticMethod(); // Calling static method without creating an object

    MyClass obj1;
    MyClass obj2;

    obj1.staticMember = 20; // Modifying static member through an object
    cout << "Static member value after modification: " << obj2.staticMember << endl; // Accessing static member through another object

    return 0;
}