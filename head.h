#include<iostream>
#include<math.h>

using namespace std;


class Vector{
  double x,y,z;
  int size;
 public:
  Vector();
  Vector(const Vector& v);
  Vector(double a, double b);
  Vector(double a, double b, double c);
  double norm();
  double get_X();
  double get_Y();
  double get_Z();
  void set_X(double a);
  void set_Y(double a);
  void set_Z(double a);
  Vector operator+(const Vector& v);
 private:
  void set_size(int n);
};
