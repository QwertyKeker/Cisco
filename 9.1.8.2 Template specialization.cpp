#include <iostream>

using namespace std;

struct Point
{
	int x, y;
};

struct Line
{
	Point start, end;
};

template<class T, class V>//your code
T add(T a, V b)
{
	return a + b;
}

template<>
Point add(Point a, Point b)
{
	Point res;
	res.x = a.x + b.x;
	res.y = a.y + b.y;
	return res;
}

template<>
Line add(Line a, Point b)
{
	Line res;
	res.start.x = a.start.x + b.x;
	res.start.y = a.start.y + b.y;
	res.end.x = a.end.x + b.x;
	res.end.y = a.end.y + b.y;
	return res;
}

int main()
{
	cout << add(5, 10) << endl;
	cout << add(5.0, 10.0) << endl;
	Point p1 = { 1, 1 };
	Point p2 = { 2, 2 };
	Point p3 = add(p1, p2);
	cout << "P3: " << p3.x << ":" << p3.y << endl;
	Line x_line = { p1, p2 };
	Line moved_line = add(x_line, p1);
	cout << "Line start: " << moved_line.start.x << ":" << moved_line.start.y << endl;
	cout << "Line end: " << moved_line.end.x << ":" << moved_line.end.y << endl;
	return 0;
}
