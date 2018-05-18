#include <iostream>
#include <vector>
#include <string>

using namespace std;

void writeVal(double value)
{
    for(int i = 2; i <= 4; i++)
    {
        cout.precision(i);
        cout << value << " ";
    }
}

int main()
{
	double value;
	cin >> value;
    cout << value << " ";
    cout.setf(ios::fixed, ios::floatfield);
    writeVal(value);
    cout.setf(ios::scientific, ios::floatfield);
    writeVal(value);
	return 0;
}
