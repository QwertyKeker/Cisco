#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

struct Point
{
    double x, y;

    Point(double x, double y):x(x),y(y){}
    Point():x(0),y(0){}

    static bool compare_point(const Point&, const Point&);
    double get_distance() const;
    friend ostream& operator<<(ostream&, const Point&);
};

bool Point::compare_point(const Point& a, const Point& b)
{
    return a.get_distance() < b.get_distance();
}

double Point::get_distance() const
{
    return sqrt(pow(this->x, 2) + pow(this->y, 2));
}

ostream& operator<<(ostream& os, Point& p)
{
    os << p.x << " " << p.y << endl;
    return os;
}

int main()
{
	vector <Point> pointsA = { { 1, 2 },{ 3, 5 },{ 2, 2 } };
	vector <Point> pointsB = { { 3, 2 },{ 2, 1 },{ 4, 1 } };
	vector <Point> pointsClosest;
    sort(pointsA.begin(), pointsA.end(), Point::compare_point);
    sort(pointsB.begin(), pointsB.end(), Point::compare_point);
    pointsClosest.resize(4);
    merge(pointsA.begin(), pointsA.begin() + 2, pointsB.begin(), pointsB.begin() + 2, pointsClosest.begin(), Point::compare_point);
    for (Point p : pointsClosest)
        cout << p;
	return 0;
}
