#include <iostream>
#include <set>
#include <functional>

using namespace std;

void killMePlz(set<auto, auto> st, double value)
{
    if(st.count(value))
    {
        for(auto it = st.find(value); it != st.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}

int main() {

	set <double, greater<double>> valuesA = { -1.1, 2.9, -2.3, 2.71 };
	set <double, greater<double>> valuesB = { -3.14, 2.71, -3.88, 2.19 };
	double value;
	cin >> value;
    killMePlz(valuesA, value);
	killMePlz(valuesB, value);
	return 0;
}
