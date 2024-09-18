//
//  Human.cpp
//  ExerciseD
//
//  Created by Jaskirat Singh on 9/17/24.
//

#include "Human.h"
#include <iostream>
using namespace std;

Human::Human(const char* nam, double x, double y): name(new char[strlen(nam)+1]) {
    strcpy(this ->name, nam);
    location.set_x(x);
    location.set_y(y);
}

char* Human::get_name() {return name;}
        
void Human::set_name(char* name) {
    //Delete old name to prevent memory leak
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Point Human::get_point()const {return location;}

void Human::display() {
    cout << "Human Name: " << name << "\nHuman Location: "
    << location.get_x() << " ,"
    << location.get_y() << ".\n" << endl;
}
