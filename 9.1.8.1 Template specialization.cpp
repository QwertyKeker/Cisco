#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Point
{
    int x, y;
    getX()
    {
        return x;
    }
    getY()
    {
        return y;
    }
};

template<class T>
int signum(T num)
{
    if(num > 0)
        return 1;
    else if(num < 0)
        return -1;
    else
        return 0;
}

template<>
int signum(Point a)
{
    if (signum(a.getX()) == 1 && signum(a.getY()) == 1)
        return 1;
    else if (signum(a.getX()) == -1 && signum(a.getY()) == -1)
        return -1;
    else
        return 0;
}

int main() {

	int valuei = -5;
	vector <Point> points = { { -1, 2 },{ -3, -5 },{ 2, 2 } };
	cout << "Value: " << valuei << " sgn: " << signum(valuei) << endl;
	for(auto point: points)
		cout << "Point: " << point.getX() << ", " << point.getY() << " sgn:" << signum(point) << endl;
	return 0;
}
