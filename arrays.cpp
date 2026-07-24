#include <bits/stdc++.h>
using namespace std;

int main(){
    //Array--> Collection of similar data type elements stored in contiguous memory locations.
    int arr[5] = {1, 2, 3, 4, 5}; //Array of size 5
    cout << "Elements of array: " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " "<< endl;
    }
    cout << endl;

    //pointers in Array--> The name of the array is a pointer to the first element of the array.
    cout << "Address of " << arr[0] << " in array: " << arr << endl;
    int *p = arr; //Pointer p is holding the address of first element of array.
    p++; //Incrementing the pointer to point to the next element of array.
    cout << *p+1 << endl;

    //Pointer Airthmetic--> Pointer arithmetic is the process of performing arithmetic operations on pointers. The operations that can be performed on pointers are addition, subtraction, increment, and decrement.
    //address(new) = address(current)+ i * sizeof(datatype)

}