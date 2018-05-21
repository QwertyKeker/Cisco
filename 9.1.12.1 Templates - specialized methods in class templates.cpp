#include <iostream>

using namespace std;

template <class T>
struct Point
{
    T x, y;

    Point(T x, T y):x(x), y(y) {}

    void add_point(Point a)
    {
        this->x += a.x;
        this->y += a.y;
    }

    void add_point(int a)
    {
        this->x += a;
        this->y += a;
    }
};



int main()
{
	Point<int> p1(1, 1);
	Point<double> p2(2.1, 2.3);
	cout << "P1: " << p1.x << ":" << p1.y << endl;
	cout << "P2: " << p2.x << ":" << p2.y << endl;
	Point<int> p3(1, 1);
	p1.add_point(p3);
	cout << "P1: " << p1.x << ":" << p1.y << endl;
	p1.add_point(1);
	cout << "P1: " << p1.x << ":" << p1.y << endl;
	return 0;
}
