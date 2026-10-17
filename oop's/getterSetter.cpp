#include<bits/stdc++.h>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;
    public:
        Chai(){
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"water", "tea leaves", "milk", "sugar"};
        }
        
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }

        //getter
        string getTeaName(){
            return teaName;
        }
        //getter for servings
        int getServings(){
            return servings;
        }

        //getter for ingredients
        vector<string> getIngredients(){
            return ingredients;
        }

        //setter
        void setTeaName(string name){
           //logic to validate the name- matlab ki agar name empty hai toh set nahi karna chahiye
            if(!name.empty()){
                teaName = name;
            }
        }
        
        //setter for servings
        void setServings(int serve){
            //logic to validate the servings- matlab ki agar servings 0 ya negative hai toh set nahi karna chahiye
            if(serve > 0){
                servings = serve;
            }
        }

        //setter for ingredients
        void setIngredients(vector<string> ingr){
            //logic to validate the ingredients- matlab ki agar ingredients empty hai toh set nahi karna chahiye
            if(!ingr.empty()){
                ingredients = ingr;
            }
        }


        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";
            for(auto ingredient : ingredients){
                cout << ingredient << ", ";
            }
            cout << endl;
        }

};




int main(){
    Chai chai;
    chai.setTeaName("Masala Chai");
    chai.setServings(2);
    chai.displayChaiDetails();

}