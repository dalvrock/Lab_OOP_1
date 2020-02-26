#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
private:
	double a, b, c;
public:
	Triangle(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	~Triangle() {}

	double GetA() { return a; }
	double GetB() { return b; }
	double GetC() { return c; }

	void SetA(double a)
	{
		if (a > 0)
		{
			this->a = a;
		}
	}

	void SetB(double b)
	{
		if (b > 0)
		{
			this->b = b;
		}
	}

	void SetC(double c)
	{
		if (c > 0)
		{
			this->c = c;
		}
	}

	double Area(Triangle& obj);
	double Perimeter(Triangle& obj);
	double Angles(Triangle& obj);
};

double Triangle::Area(Triangle& obj)
{
	return (((a + b + c) / 2) * ((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c));
}

double Triangle::Perimeter(Triangle& obj)
{
	return (a + b + c);
}

double Triangle::Angles(Triangle& obj)
{
	return acos((b * b + c * c - a * a) / 2 * b * c);
	return acos((a * a + c * c - b * b) / 2 * a * c);
	return acos((a * a + b * b - c * c) / 2 * a * b);
}

int main()
{
	Triangle obj1(3, 4, 5);
	
	cout << obj1.GetA() << endl;
	cout << obj1.GetB() << endl;
	cout << obj1.GetC() << endl;

	obj1.SetA(5);
	obj1.SetB(9);
	obj1.SetC(13);

	cout << obj1.Area(obj1) << endl;
	cout << obj1.Perimeter(obj1) << endl;
	cout << obj1.Angles(obj1) << endl;

}