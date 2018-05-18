#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;
double multiply_value(double value)
{
	return value * 11.123;
}

bool desc (int i,int j)
{
    return (i > j);
}


int main()
{
	double value;
	cin >> value;
    vector<double> vvv(5);
    vector<double> vvv2(5);
    vvv[0] = value;
    for(auto i = vvv.begin() + 1; i < vvv.end(); i++)
    {
        *i = multiply_value(*(i - 1));
    }
    vvv2 = vvv;
    sort(vvv2.begin(), vvv2.end(), desc);
    for(int i = 0; i < 5; i++)
    {
        cout << setw(10) << setfill('*') << vvv[i] << "|"
            << setw(10) << setfill('*') << vvv2[i] << endl;
    }
	return 0;
}
