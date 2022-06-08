#include<iostream>
#include"Point.h"
using namespace std;


class Circle
{
	Point center;
	float rad;
	int p ;
	int q ;

public:

	Circle::Circle(int x, int y, float r) : center(x, y)
	{
		rad = r;
		p = x;
		q = y;
		cout << "Circle() called" << endl;
	}
	int getrad()
	{
		return rad;
	}
	bool CheckOnCircle(Point obj)
	{
		int d = (obj.getx - p)*(obj.getx -p) + (obj.gety - q)*(obj.gety - q);
		d = d*d;
		if (d <= rad)
			return true;

	}
	~Circle()
	{
		cout << "~Circle() called " << endl;
	}
};