#include <vector>
#include <algorithm>
#include <iostream>
#include <ostream>
#include <polynomial.h>

using namespace std;

// constructor that takes a vector of coefficients
Polynomial::Polynomial(const vector<double> &c)
{
    for (auto i = c.size(); i >= 0; i--) // stored backwards so operations are easier to do
    {
        coeffs.push_back(i);
    }
}

// addition operator
Polynomial Polynomial::operator+(const Polynomial &other) const
{
}

// subtraction operator
Polynomial Polynomial::operator-(const Polynomial &other) const
{
}

// multiplication operator
Polynomial Polynomial::operator*(const Polynomial &other) const
{
}

// check equality
bool Polynomial::operator==(const Polynomial &other) const
{
}

// check if not equal
bool Polynomial::operator!=(const Polynomial &other) const
{
}

ostream &operator<<(ostream &out, const Polynomial &other)
{
}
