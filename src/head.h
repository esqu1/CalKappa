#include<iostream>
#include<string>
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
  string to_string() const;
  Vector operator+(const Vector& v) const;
  Vector operator-() const;
  Vector operator-(const Vector& v) const;
  double dot(const Vector& v);
  Vector cross(const Vector& v);
 private:
  void set_size(int n);
};

inline ostream& operator<<(ostream& stream, const Vector& v){
  return stream << v.to_string();
}
