#include <bits/stdc++.h>
using namespace std;

//inline function --> ye function ke liye use hota hai jisse compiler ko ye bataya jata hai ki function ke body ko uske call ke jagah pe replace kar do. Isse function call ka overhead kam ho jata hai aur program ki performance improve hoti hai. Inline functions chhote aur simple functions ke liye useful hote hain, lekin bade aur complex functions ke liye inline function ka use karna sahi nahi hota kyunki isse code size badh sakta hai.
inline int product(int a, int b){// formal parameters a and b are used to receive the values passed to the function
    return a * b;
} //function definition
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b; //a and b are actual parameters (arguments) passed to the function sum.
    cout << "The product of a and b is: " << product(a, b) << endl; //function call




    return 0;
}

//static variable --> ye variable function ke andar declare hota hai aur uska value function ke multiple calls ke beech me retain hota hai. Static variable ko sirf ek baar initialize kiya jata hai aur uska value function ke next call me bhi available rehta hai. Iska use tab hota hai jab hume function ke andar ek variable ka value yaad rakhna ho aur usko multiple calls me use karna ho.
//for example--> 
// static int count = 0; //static variable
// void increment() {
//     count++;
// } abb ye count variable function ke multiple calls ke beech me retain hoga aur uska value increment hota rahega.