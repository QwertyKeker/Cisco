#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<double> values =
		{ 2.1, 3.14, 2.2, 1.1, 2.11, 3.2, 3.6, 2.5, 2.6, 4.11, 4.12, 3.11, 3.73, 4.83};
	unsigned start_value;
	cin >> start_value;
	unsigned stop_value;
	cin >> stop_value;
    int c = count_if(values.begin(), values.end(), [start_value, stop_value](double value)
                     { return (value >= start_value && value <= stop_value);});
    cout << endl << c << " numbers found";
	return 0;
}
