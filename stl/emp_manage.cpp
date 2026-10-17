#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp){
    cout<< "ID: " << emp.id << ", Name: " << emp.name << ", Salary: " << emp.salary << endl;
}

int main(){
    vector<Employee> employees = {
        {1, "Alice", 50000},
        {2, "Bob", 60000},
        {3, "Charlie", 55000},
        {4, "David", 70000},
        {5, "Eve", 65000}
    };

    sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b){
        return a.salary < b.salary;
    });

    cout << "Employees sorted by salary:\n";
    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(
        employees.begin(),
        employees.end(), 
        back_inserter(highEarners), 
        [](const Employee& emp){
        return emp.salary > 60000;
    });

    cout << "High Earners:\n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(
        employees.begin(),
        employees.end(),
        0.0,
        [](double sum, const Employee& emp){
            return sum + emp.salary;
        }
    );

    double averageSalary = totalSalary / employees.size();

    auto highestPaid = max_element(
        employees.begin(),
        employees.end(),
        [](const Employee& a, const Employee& b){
            return a.salary < b.salary;
        }
    );

    cout << "Average Salary: " << averageSalary << endl;
    cout << "Highest Paid Employee:\n";
    displayEmployee(*highestPaid);

    return 0;
}