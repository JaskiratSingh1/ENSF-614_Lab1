//
//  Human.h
//  ENSF-614_Lab1
//
//  Created by Jaskirat Singh on 9/17/24.
//

#ifndef HUMAN_H
#define HUMAN_H

#include "Point.h"
#include <cstring>

class Human {
private:
    // Location of an object of Human on a Cartisian Plain// Location of an object of Human on a Cartisian Plain
    Point location;
    // Human's name
    char *name;
public:
    Human(const char* nam="", double x=0, double y=0);
    char* get_name();
    void set_name(char* name);
    Point get_point()const;
    void display();
};

#endif
