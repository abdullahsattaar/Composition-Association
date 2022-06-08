#include<iostream>
using namespace std;

class Point
{
public:
	int* x;
	int* y;	
	Point()
	{
		x = new int;
		y = new int;

	}
	Point(int a, int b)
	{
		*x = a;
		*y = b;
		cout << "Point() called" << endl;
		
	}
	int getx()
	{
		return *x;
	}
	int gety()
	{
		return *y;
	}
	void Print()
	{
		cout << "Point is : (" << x << "," << y << ")" << endl;
	}
	~Point()
	{
		delete[]x;
		delete[]y;
		cout << "~Point() called " << endl;
	}
};

