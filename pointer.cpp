#include <bits/stdc++.h>
using namespace std;

int main(){
    //Pointer --> A Data type that holds the address of other variable 

    int a = 10;
    int *b = &a; //pointer b is holding the address of variable a.
    //& --> Address of operator
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    // * -->(value at operater --> matlab is address par konsi value hai) Dereference operator means it will give the value of the address stored in pointer variable.
    cout << "Value of b: " << b << endl;
    cout << "Value pointed by b: " << *b << endl;

// Pointer to pointer variable --> a pointer holding the address of another pointer variable.
    int **c = &b; //pointer c is holding the address of pointer variable b.
    cout << "Value of c: " << c << endl;
    cout << "Value pointed by c: " << *c << endl;
    cout << "Value pointed by pointer pointed by c: " << **c << endl;
}