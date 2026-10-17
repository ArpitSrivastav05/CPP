#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>


using namespace std;

struct Product{
    int productId;
    string name;
    string category;
};

struct Order{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main(){

    vector<Product> products ={
        {101, "Laptop", "Electronics"},
        {102, "Smartphone", "Electronics"},
        {103, "T-shirt", "Clothing"},
        {104, "Jeans", "Clothing"},
        {105, "Coffee Maker", "Home Appliances"}
    };

    deque<string> recentCustomers = {"C001", "C002", "C003", "C004", "C005"};

    recentCustomers.push_back("C006");

    list<Order> orderHistory;
    
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C001", time(0)});
    orderHistory.push_back({3, 103, 3, "C001", time(0)});

    set<string> categories;

    for(const auto &product : products){
        categories.insert(product.category);
    }

    map<int ,int> productStock = {
        {101, 10},
        {102, 20},
        {103, 30},
        {104, 40},
        {105, 50}
    };

    multimap<string, Order> customerOrders;

    for(const auto &order : orderHistory){
        customerOrders.insert({order.customerId, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "Charlie"},
        {"C004", "David"},
        {"C005", "Eve"}
    };

    unordered_set<int> uniqueProductIds;

    for(const auto &product : products){
        uniqueProductIds.insert(product.productId);
    }

    // Displaying the data
    cout << "Products:\n";
    for(const auto &product : products){
        cout << "ID: " << product.productId << ", Name: " << product.name << ", Category: " << product.category << endl;
    }
    cout << "\nRecent Customers:\n";
    for(const auto &customer : recentCustomers){
        cout << customer << endl;
    }
    cout << "\nOrder History:\n";
    for(const auto &order : orderHistory){
        cout << "Order ID: " << order.orderId << ", Product ID: " << order.productId << ", Quantity: " << order.quantity << ", Customer ID: " << order.customerId << ", Order Date: " << ctime(&order.orderDate);
    }
    cout << "\nCategories:\n";
    for(const auto &category : categories){
        cout << category << endl;
    }
    cout << "\nProduct Stock:\n";
    for(const auto &entry : productStock){
        cout << "Product ID: " << entry.first << ", Stock: " << entry.second << endl;
    }
    cout << "\nCustomer Orders:\n";
    for(const auto &entry : customerOrders){
        cout << "Customer ID: " << entry.first << endl;
        const auto &order = entry.second;
        cout << "  Order ID: " << order.orderId << ", Product ID: " << order.productId << ", Quantity: " << order.quantity << ", Order Date: " << ctime(&order.orderDate);
    }
    cout << "\nCustomer Data:\n";
    for(const auto &entry : customerData){
        cout << "Customer ID: " << entry.first << ", Name: " << entry.second << endl;
    }
    cout << "\nUnique Product IDs:\n";
    for(const auto &id : uniqueProductIds){
        cout << id << endl;
    }


    return 0;
}