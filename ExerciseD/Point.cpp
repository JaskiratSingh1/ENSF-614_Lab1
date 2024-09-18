//
//  Point.cpp
//  ExerciseD
//
//  Created by Jaskirat Singh on 9/17/24.
//

#include "Point.h"

// Constructor
Point::Point(double a, double b): x(a), y(b) {}

// Getters
double Point::get_x() const { return x; }

double Point::get_y() const { return y; }

// Setters
void Point::set_x(const double& xInput) { x = xInput; }

void Point::set_y(const double& yInput) { y = yInput; }
