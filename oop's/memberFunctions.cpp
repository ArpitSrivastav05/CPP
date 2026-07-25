#include<bits/stdc++.h>
using namespace std;

class Binary{
        string s; 
    
    public: 
        void read(); //member function to read binary number
        void chk_bin(); //member function to check whether the number is binary or not
        void ones_compliment(); //member function to find one's compliment of binary number
        void display(); //member function to display binary number

};

void Binary::read(){ //after the scope resolution operator we are defining the member function to read binary number.
    cout<<"Enter a binary number: ";
    cin>>s;
}

void Binary::chk_bin(){ // we are defining the member function to check whether the number is binary or not.
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void Binary::ones_compliment(){ // we are defining the member function to find one's compliment of binary number.
    chk_bin(); //calling member function to check whether the number is binary or not.
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void Binary::display(){ // we are defining the member function to display binary number.
    cout<<"The one's compliment of binary number is: "<<s<<endl;
}

int main(){
    Binary b; //creating object of class Binary
    b.read(); //calling member function to read binary number
    b.ones_compliment(); //calling member function to find one's compliment of binary number
    b.display(); //calling member function to display binary number
    return 0;
}