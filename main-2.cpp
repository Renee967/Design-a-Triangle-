/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

enum class triangleType { scalene, isosceles, equilateral, noTriangle };
triangleType triang(double, double, double);

int main()
{
    double a;
    double b;
    double c;

    triangleType shape;

    cout << "Side 'a' length:  " << flush;
    cin >> a;
    cout << "Side 'b' length:  " << flush;
    cin >> b;
    cout << "Side 'c' length:  " << flush;
    cin >> c;

    shape = triang(a, b,c);
    switch (shape)
    {
    case triangleType::scalene:
        cout << "Triangle Shape:  Scalene" << endl;
        break;
    case triangleType::isosceles:
        cout << "Triangle Shape:  Isosceles" << endl;
        break;
    case triangleType::equilateral:
        cout << "Triangle Shape:  Equilateral" << endl;
        break;
    case triangleType::noTriangle:
        cout << "Triangle Shape:  -- No Shape --" << endl;
        break;
    }

    return 0;
}

triangleType triang(double a, double b, double c)
{

    triangleType shape;

    if ((a > (b + c)) || (b > (a + c)) || (c > (a + b)))
        shape = triangleType::noTriangle;
    else if ((a == b) && (a == c) && (b == c))
        shape = triangleType::equilateral;
    else if (a != b && a != c && b != c)
        shape = triangleType::scalene;
    else
        shape = triangleType::isosceles;

    return shape;
}
