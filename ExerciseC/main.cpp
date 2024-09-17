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

struct Company {
    string companyName;
    string companyAdderss;
    
    vector<string> employees; string dateEstablished; // vector of information about employees’ information
    
    // (name, address, date of birth)
    // the date that company was established
    vector <string> employeeState; // information about employees' current states
    
    //(active, suspended, retired, fired)
    vector <string> customers; // vector of information about customers
    // (name, address, phone)
};
