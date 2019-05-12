#include "point3D.h"
#include <iostream>
using namespace std;
point3D::point3D():x(0),y(0),z(0)
{
	cout << "without any parameters.\n";
}
point3D::point3D(double x, double y, double z) : x(x), y(y), z(z)
{
	cout << "with parameters.\n";
}
void point3D::show()
{
	cout << "( " << x << ',' << y << ',' << z << " )\n";
}
point3D::~point3D()
{
	cout << "destructor!\n";
}

