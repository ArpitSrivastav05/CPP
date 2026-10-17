#include <bits/stdc++.h>
using namespace std;

int* prepareChaiOrders(int cups){
    int* orders = new int[cups]; // Dynamically allocate memory for the array by new keyword
    for(int i = 0; i < cups; i++){
        orders[i] = (i + 1) * 10; // Assign order numbers to the array
    }
    return orders; // Return the pointer to the dynamically allocated array
}

int main() {
    int cups;
    cout << "Enter the number of chai cups: ";
    cin >> cups;

    int* chaiOrders = prepareChaiOrders(cups); // Call the function to prepare chai orders

    cout << "Chai Orders: ";
    for(int i = 0; i < cups; i++){
        cout << chaiOrders[i] << " "; // Print the chai orders
    }
    cout << endl;

    delete[] chaiOrders; // Free the dynamically allocated memory
    return 0;
}

//  * -> Pointer operator-- ye hum tab use karenege jab hamko kisi variable ka address lena ho ya phir kisi pointer ko dereference karna ho.
// & -> Address-of operator-- ye hum tab use karenge jab hame kisi variable ka address lena ho.
// in dono me difference ye hai ki * operator pointer ko dereference matlab ki pointer ke andar jo value hai usko access karna hota hai, jabki & operator ka use variable ka address lene ke liye hota hai.