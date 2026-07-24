#include<bits/stdc++.h>
using namespace std;

//Function Overloading --> Function overloading is a feature in C++ where two or more functions can have the same name but different parameters (either in number or type). 
//The compiler determines which function to call based on the arguments passed during the function call.


int sum(int a, int b){
    cout << "Function with 2 parameters called." << endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout << "Function with 3 parameters called." << endl;
    return a+b+c;
}

int main(){
    cout << sum(5, 10) << endl; // Calls the first version
    cout << sum(5, 10, 15) << endl; // Calls the second version

    return 0;
}