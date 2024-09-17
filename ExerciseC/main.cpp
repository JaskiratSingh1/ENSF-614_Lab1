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
/*
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

class Customers : public Person {
    
};

class Company {
    
};

