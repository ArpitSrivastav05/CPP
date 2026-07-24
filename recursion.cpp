#include <bits/stdc++.h>
using namespace std;

//Recursion --> Recursion is a programming technique where a function calls itself to solve a problem.
//  It is used to break down complex problems into simpler sub-problems. 
//  Recursion consists of two main parts: the base case and the recursive case. 
//  The base case is the condition that stops the recursion, while the recursive case is where the function calls itself with modified arguments.

int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int fibonacci(int n){

    if(n<=1) return n; //base case
    return fibonacci(n-1) + fibonacci(n-2); //recursive case
}
//Recursive Fuctions --> The function that calls itself is known as a recursive function. like factorial function above is a recursive function because it calls itself to calculate the factorial of a number.

int main(){
    int n;
    cout << "Enter a number to calculate its factorial and fibonacci series: ";
    cin>>n;
    cout<< "Factroial of " << n << " is: " << factorial(n) << endl; //function call
    cout << "Fibonacci series up to " << n << " terms: ";
    for(int i=0; i<n; i++){
        cout << fibonacci(i) << " "; //function call
    }
    cout << endl;

    return 0;
}