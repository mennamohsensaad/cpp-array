#ifndef MATHEMATICS_HPP
#define MATHEMATICS_HPP

#include <cmath> // for std::sqrt

namespace mathematics
{

double calculation(double a, double b, char operation)
{
    if (operation == '+')
    {
        return a + b;
    }
    else if (operation == '-')
    {
        return a - b;
    }
    else if (operation == '*')
    {
        return a * b;
    }
    else if (operation == '/')
    {
        return a / b;
    }
    else
    {
        return 0;
    }
 
}

double heron(double a, double b, double c)
{
    double s = (a + b + c) / 2;

    double triangle_area = sqrt(s * (s - a) * (s - b) * (s - c));
}

double square (double x )
{ 
return x * x ;
}

}

#endif // MATHEMATICS_HPP
