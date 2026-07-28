#include<bits/stdc++.h>
using namespace std;

class Shop{
    int itemId[100]; //array to store item ids
    int itemPrice[100]; //array to store item prices    
    int counter; //counter to keep track of number of items
    public:
        void initCounter(){counter=0;} //member function to initialize counter
        void getPrice(void); //member function to get item Price
        void setPrice(void); //member function to set item Price
        void displayPrice(void); //member function to display item Price

};
void Shop::setPrice(void){ // we are defining the member function to set item Price.
    cout<<"Enter Id of your item no. "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item:  "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop::getPrice(void){ // we are defining the member function to get item Price.
    int id;
    cout<<"Enter Id of your item to get its price: "<<endl;
    cin>>id;
    for(int i=0;i<counter;i++){
        if(itemId[i]==id){
            cout<<"Price of your item is: "<<itemPrice[i]<<endl;
            return;
        }
    }
    cout<<"Item not found"<<endl;
}

void Shop::displayPrice(void){ // we are defining the member function to display item Price.
    for(int i=0;i<counter;i++){
        cout<<"Item Id: "<<itemId[i]<<" Price: "<<itemPrice[i]<<endl;
    }
}

int main(){
    Shop dukaan; //creating object of class Shop
    dukaan.initCounter(); //calling member function to initialize counter
    dukaan.setPrice(); //calling member function to set item Price
    dukaan.setPrice(); //calling member function to set item Price
    dukaan.getPrice(); //calling member function to get item Price
    dukaan.displayPrice(); //calling member function to display item Price
    return 0;
}