//
//  main.cpp
//  ExerciseC
//
//  Created by Jaskirat Singh on 9/13/24.
//

// company.cpp

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* ORIGINAL:
struct Company {
    string companyName;
    string companyAdderss;
    
    vector<string> employees; 
    string dateEstablished;     // vector of information about employees’ information
    
                                // (name, address, date of birth)
                                // the date that company was established
    vector <string> employeeState; // information about employees' current states
    
                                //(active, suspended, retired, fired)
    vector <string> customers;   // vector of information about customers
                                // (name, address, phone)
};
*/

class Person {
private:
    string name;
    string address;
    string dateOfBirth;
public:
    // Ctor
    Person(const string& name, const string& address, const string& dateOfBirth):
        name(name), address(address), dateOfBirth(dateOfBirth) {}
    
    // Getters
    string getName() const { return name; }
    string getAddress() const { return address; }
    string getDateOfBirth() const { return dateOfBirth; }
    
    // Setters
    void setName(const string& name) { this->name = name; }
    void setAddress(const string& address) { this->address = address; }
    void setDateOfBirth(const string& dateOfBirth) { this->dateOfBirth = dateOfBirth; }
};

class Employee : public Person {
private:
    //(active, suspended, retired, fired)
    string employeeState;
    
public:
    // Ctor
    Employee(const string& name, const string& address, const string& dateOfBirth, const string& employeeState):
        Person(name, address, dateOfBirth), employeeState(employeeState) {}
    
    // Getter
    string getEmployeeState() const { return employeeState; }
    
    // Setter
    void setEmployeeState(const string& employeeState) { this->employeeState = employeeState; }
};

class Customer : public Person {
private:
    string phoneNumber;
    
public:
    // Ctor
    Customer(const string& name, const string& address, const string& dateOfBirth, const string& phoneNumber):
        Person(name, address, dateOfBirth), phoneNumber(phoneNumber) {}
    
    // Getter
    string getPhoneNumber() const { return phoneNumber; }
    
    // Setter
    void setPhoneNumber(const string& phoneNumber) { this->phoneNumber = phoneNumber; }
};

class Company {
private:
    string companyName;
    string companyAddress;
    string dateEstablished;
    vector<Employee> employees;
    vector<Customer> customers;
    
public:
    Company(const string& name, const string& address, const string& date):
    companyName(name), companyAddress(address), dateEstablished(date) {}
    
    // Getters
    string getCompanyName() const { return companyName; }
    string getCompanyAddress() const { return companyAddress; }
    string getDateEstablished() const { return dateEstablished; }
    vector<Employee> getEmployees() const { return employees; }
    vector<Customer> getCustomers() const { return customers; }
    
    // Setters
    void setCompanyName(const string& companyName) { this->companyName = companyName; }
    void setCompanyAddress(const string& companyAddress) { this->companyAddress = companyAddress; }
    void setDateEstablished(const string& dateEstablished) { this->dateEstablished = dateEstablished; }
    void addEmployee(const Employee& employee) { employees.push_back(employee); }
    void addCustomer(const Customer& customer) { customers.push_back(customer); }
};

//Person holds data common between employees and customers (abstraction)
//Person has all data as private members, with getters and setters for data control (encapsulation and information hiding)
//Each class has its own purpose and responsibilities (Modularity)
//Employee and Customer inherit from Person (Inheritance)
