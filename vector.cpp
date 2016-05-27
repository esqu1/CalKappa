/**********
 * Vector 
 * 
 * This class is different from the built-in vector<> class.
 * Only for 2 or 3 components.
 *
 *******/
#include "head.h"

Vector::Vector(){}

Vector::Vector(const Vector& v){
  x = v.x; y = v.y; z = v.z; size = v.size;
}

Vector::Vector(double a, double b){
  x = a; y = b; size = 2;
}

Vector::Vector(double a, double b, double c){
  x = a; y = b; z = c; size = 3;
}

void Vector::set_size(int n){
  size = n;
}

double Vector::get_X(){
  return x;
}

double Vector::get_Y(){
  return y;
}

double Vector::get_Z(){
  if (size == 2){
    cout << "Operation not permitted for Vector of size 2.\n";
    throw 0;
  }else{
    return z;
  }
}

void Vector::set_X(double a){
  this->x = a;
}

void Vector::set_Y(double a){
  this->y = a;
}

void Vector::set_Z(double a){
  if (size == 2){
    cout << "Error: Operation not permitted for Vector of size 2.\n";
    throw 0;
  }else{
    this->z = a;
  }
}

double Vector::norm(){
  return pow(pow(x,2) + pow(y,2) + pow(z,2),0.5);
}

Vector Vector::operator+(const Vector& v){
  Vector n (v);
  if(this->size == v.size){
    n.set_X(n.x + this->x);
    n.set_Y(n.y + this->y);
    n.set_Z(n.z + this->z);
  }else{
    cout << "Error: Operation not permitted for Vectors of different sizes.\n";
    throw 0;
  }
}
