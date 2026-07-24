#include <bits/stdc++.h>
using namespace std;

//function --> A function is a block of code that performs a specific task. It is a self-contained module that can be called from other parts of the program. Functions are used to break down a program into smaller, manageable pieces, making it easier to read, understand, and maintain.

//function prototype --> A function prototype is a declaration of a function that specifies the function's name, return type, and parameters (if any) without providing the actual implementation of the function. It serves as a forward declaration, allowing the compiler to recognize the function's signature before its definition is encountered in the code. Function prototypes are typically placed at the beginning of a program or in header files to enable proper function calls and type checking.

int sum(int a, int b){// formal parameters a and b are used to receive  the values passed to the function
    int c = a + b;
    return c;
} //function definition

int main(){
    
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2; //num1 and num2 are actual parameters (arguments) passed to the function sum
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl; //function call

    return 0;
}