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
	vector <Point> points = { {1, 2}, {3, 5}, {2, 2} };
    for(Point p : points)
        cout << p;
    sort(points.begin(), points.end(), Point::compare_point);
    cout << endl;
    for(Point p : points)
        cout << p;
    vector <Point> myPoints = { {5, 6}, {76 , 0.5 }, {0.54, 5}, {5, 7}, {3, 9} };
    sort(myPoints.begin(), myPoints.end(), Point::compare_point);
    cout << endl;
    for (Point p : myPoints)
        cout << p;
	return 0;
}
