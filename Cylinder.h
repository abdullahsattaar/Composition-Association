#include"Circle.h"

class Cylinder
{
	int height;
	Circle top;
	Circle bottom;

public:

	Cylinder(int a, int b, int c, int d, int e, int f, int g) :top(b, c, d), bottom(e,f,g)
	{
		height = a;
	}

	bool CheckOnCylinder(Point &p1)
	{
		if (top.CheckOnCircle(p1) || bottom.CheckOnCircle(p1))
			return true;
	}
	~Cylinder()
	{
		cout << "~Cylinder() called" << endl;
	}
};