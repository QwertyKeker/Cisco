#include <iostream>
#include <string>

using namespace std;

int main()
{
	double value;
	cin >> value;
	cout << value << endl;
    cout.setf(ios::showpos);
    cout.setf(ios::showpoint);
    cout << value << endl;
    cout << noshowpos << value << endl;
    cout.setf(ios::showpos);
    cout << noshowpoint << value << endl;
	return 0;

}
