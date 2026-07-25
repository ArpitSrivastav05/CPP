#include<bits/stdc++.h>
using namespace std;

//class --> A class is a user-defined data type that allows us to combine data members and member functions. It is a blueprint for creating objects. 
//The default access specifier for class members is private. It means that the members of a class are not accessible outside the class unless we specify them as public.
class Employee{

    private:
        int a, b, c; //private access specifier means that the members of a class are not accessible outside the class unless we specify them as public.
    
    public: 
        int d, e; //public access specifier means that the members of a class are accessible outside the class.
        void setData(int a1, int b1, int c1); //we are declaring member function to set the values of private members.
        void getData(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        } //member function to get the values of private members.

};

void Employee::setData(int a1, int b1, int c1){//after the scope resolution operator we are defining the member function to set the values of private members.
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee emp; //creating object of class Employee
    emp.setData(10, 20, 30); //calling member function to set values
    emp.d = 40; //setting value of public member d
    emp.e = 50; //setting value of public member e
    emp.a = 60; //error: 'int Employee::a' is private within this context
    emp.getData(); //calling member function to get values
    return 0;
}