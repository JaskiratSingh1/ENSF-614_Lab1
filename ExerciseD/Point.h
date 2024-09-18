//
//  Point.h
//  ENSF-614_Lab1
//
//  Created by Jaskirat Singh on 9/17/24.
//

#ifndef Point_h
#define Point_h

#include <stdio.h>
#include <cstring>

class Point{
private:
    double x;     // x coordinate of a location on Cartisian Plain
    double y;     // y coordinate of a location on Cartisian Plain
public:
    Point(double a = 0, double b = 0);
    double get_x() const;
    double get_y() const;
    void set_x(const double& xInput);
    void set_y(const double& yInput);
};

#endif /* Point_h */
