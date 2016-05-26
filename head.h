#include<iostream>
#include<math.h>

using namespace std;


class Vector{
  double x,y,z;
  int size;
public:
  Vector(double a, double b);
  Vector(double a, double b, double c);
  double norm();
};
