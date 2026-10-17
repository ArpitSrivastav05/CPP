//Encapsulation - Binding data and methods that operate on that data within a single unit
//yaha par humne ek class banayi hai jisme private data members hai jaise accountNumber aur balance aur public methods hain jaisa ki getAccountDetails. Private data members ko direct access nahi kiya ja sakta, balki unhe access karne ke liye public methods ka use kiya jata hai. Isse data ko protect kiya jata hai aur encapsulation achieve hoti hai.
#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance; 

    public://constructor
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void getAccountDetails() {//setter function to display account details
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
};

int main() {
    BankAccount account("123456789", 1000.0);

    account.getAccountDetails();

    account.deposit(500.0);
    account.getAccountDetails();

    account.withdraw(200.0);
    account.getAccountDetails();

    account.withdraw(2000.0); // Invalid withdrawal

    return 0;
}
