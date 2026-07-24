#include <bits/stdc++.h>
using namespace std;


//this will not swap the values of x and y because the function swap is using pass by value. The values of x and y are copied into the parameters a and b, and any changes made to a and b inside the function do not affect the original variables x and y in main.
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
};


//this will swap the values of x and y because the function swapPointer is using pass by reference. The function takes pointers to the variables x and y, allowing it to modify the original variables directly.
void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
};

//call by reference using reference variables
void swapReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
};

int main() {
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    //swap(x, y);
    //swapPointer(&x, &y);
    swapReference(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}