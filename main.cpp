#include<iostream>
#include"Circle.h"
#include"Cylinder.h"
using namespace std;

main()
{
	Point p1(2, 4);
	Circle c1(5.3, 2, 3); //Take radius, x, y c1.CheckOnCircle(p1)
	p1.Print();
	;
	Cylinder cl1(7, 5.3, 2, 9, 5.3, 2, 3); //takes height, parameters for top and bottom circles
	cl1.CheckOnCylinder(p1);
}