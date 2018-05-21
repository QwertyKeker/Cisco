#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

template<class T>
T signum(T num)
{
    if(num > 0)
        return 1;
    else if(num < 0)
        return -1;
    else
        return 0;
}

template<class T>
string toString(T num)
{
    return to_string(num);
}

int main() {

	int valuei;
	double valued;
    cout << "Enter int value: ";
    cin >> valuei;
    cout << "Enter double value: ";
    cin >> valued;
    cout << '\n' << signum(valuei) << ' ' << signum(valued) << ' '
        << toString(valuei) << ' ' << toString(valued);
	return 0;
}
