//abstraction - Hiding the internal details of an object and showing only the necessary information
// jaise ki humne ek base class banayi hai jiska naam Animal hai aur usme ek virtual function sound() hai. Fir humne Dog class banayi hai jo Animal class ko inherit karti hai aur sound() function ko override karti hai. Jab hum Animal pointer ke through Dog object ko point karte hain aur sound() function call karte hain, to Dog class ka overridden function call hota hai, isse abstraction achieve hoti hai kyunki hume sirf necessary information dikh rahi hai aur internal details hide ho rahi hain. 

//jaise yaha necessary information sirf sound() function ka output hai aur internal details jaise ki Dog class ka implementation hide ho rahi hain. Isse abstraction achieve hoti hai.

//virtual function ka use karke hum abstraction achieve karte hain kyunki hume sirf base class ke through derived class ka behavior dikh raha hai aur internal implementation details hide ho rahi hain.

#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() { cout << "Some sound"; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Bark"; }
};

int main() {
    Animal* a = new Dog();
    a->sound();   // Output: Bark (not "Some sound")
}
