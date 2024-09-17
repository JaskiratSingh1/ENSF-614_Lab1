// exAmain.cpp
// Lab 1 - Exercise A
// Author - M. Moussavi

#include <iostream>
using namespace std;
#include "mystring.h"

int main(void)
{
  Mystring *ar[3];
  Mystring c = 3;//Int constructor call
    ar[2] = &c;
    ar[1] = ar[0] = nullptr;
    
  // A BLOCK OF CODE BEGINS HERE
  {
      Mystring x[2];//Default constructor called x2

    x[0].set_str("ENEL");
    x[1].set_str("0");
    Mystring* z = new Mystring("4");//Constructor with char* arg called
      
      x[0].append(*z).append(x[1]); //Copy constructor x2 and destructor x2
  
      Mystring mars = x[0]; //Copy constructor is called

      x[1] = x[0]; //Assignment operator called.
    
      Mystring jupiter("White");//Constructor with char* called

      ar[0] = new Mystring ("Yellow");//Constructor with char* called

  } // BLOCK ENDS HERE //destructor x4

  c.set_str("A");
  delete  ar [0]; //destructor x1
 
    Mystring d = "Green";//Construcor with char* arg
  
  cout << "\nProgram terminated successfully." <<endl;
  return 0;
}

