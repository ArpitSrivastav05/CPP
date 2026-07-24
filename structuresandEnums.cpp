#include<bits/stdc++.h>
using namespace std;

//structures --> A structure is a user-defined data type that allows us to combine data items of different kinds.

typedef struct employee{
    //data members of structure
    int id;
    string name;
    float salary;
} ep; //ep is a user-defined data type of structure employee. matlab ki hum abb sirf ep likhenge struct employee ki jagah yahi kaam karta hai type def

union money //union --> A union is a user-defined data type that allows us to store different data types in the same memory location. It can hold only one of its non-static data members at a time. matlab ki agar humne rice ko value di toh car aur pounds ki value overwrite ho jaayegi.hum ek time par sirf ek hi value store kar sakte hai.
{
    int rice;
    char car;
    float pounds;
}; 

int main(){

    union money m1; //creating a union variable money1 of type union money.
    m1.rice = 34;//accessing the members of union using dot operator
    m1.car = 'A'; 
    cout << "Rice: " << m1.rice << endl; // now it is showing garbage value because we have assigned value to car after rice. so rice ki value overwrite ho gayi hai.
    cout << "Car: " << m1.car << endl; // now it is showing the value of car because we have assigned value to car after rice. so car ki value overwrite ho gayi hai.


    ep emp1; //creating a structure variable emp1 of type employee.
    emp1.id = 101; //accessing the members of structure using dot operator.
    emp1.name = "Arpit";
    emp1.salary = 50000;
    cout << "Employee ID: " << emp1.id << endl;
    cout << "Employee Name: " << emp1.name << endl;
    cout << "Employee Salary: " << emp1.salary << endl;

    ep emp2; //creating a structure variable emp2 of type employee.
    emp2.id = 102; //accessing the members of structure using dot operator.
    emp2.name = "Rohit";
    emp2.salary = 60000;    
    cout << "Employee ID: " << emp2.id << endl;
    cout << "Employee Name: " << emp2.name << endl; 
    cout << "Employee Salary: " << emp2.salary << endl;

    return 0;
}