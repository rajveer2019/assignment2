#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>
#include <ostream>

using namespace std;

class Polynomial
{

  friend ostream &operator<<(ostream &out, const Polynomial &other);

private:
  vector<double> coeffs; // coefficients of the polynomial

public:
  // constructor that takes a vector of coefficients
  Polynomial(const std::vector<double> &c);

  // addition operator
  Polynomial operator+(const Polynomial &other) const;

  // subtraction operator
  Polynomial operator-(const Polynomial &other) const;

  // multiplication operator
  Polynomial operator*(const Polynomial &other) const;

  // check equality
  bool operator==(const Polynomial &other) const;

  // check if not equal
  bool operator!=(const Polynomial &other) const;
  // print function
};

#endif