/**********
 * Vector 
 * 
 * This class is different from the built-in vector<> class.
 * Only for 2 or 3 components.
 *
 *******/
#include "head.h"

Vector::Vector(double a, double b){
  x = a; y = b; size = 2;
}

Vector::Vector(double a, double b, double c){
  x = a; y = b; z = c; size = 3;
}

double Vector::norm(){
  return pow(pow(x,2) + pow(y,2) + pow(z,2),0.5);
}
