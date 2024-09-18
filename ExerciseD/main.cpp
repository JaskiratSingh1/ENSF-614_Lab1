//
//  main.cpp
//  ENSF-614_Lab1
//
//  Created by Jaskirat Singh on 9/17/24.
//

#include "Human.h"
using namespace std;
#include <iostream>


int main(int argc, char **argv)
{
    double x = 2000, y = 3000;
    Human h("Ken Lai", x , y);
    h.display();
    return 0;
}
