//<problem chapter="4" section="1" slide="3" problem="1" title="Swaping operation">
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const int & value)
{
	cout << value << " ";
}

int main()
{
	vector<int> v1 = {5, 6, 7, 8, 9, 0, 1, 2, 3, 4};
	vector<int> v2(10);
	vector<int> v3(10);
	unsigned start_value;
	cin >> start_value;
	unsigned stop_value;
	cin >> stop_value;
	if (start_value>stop_value)
	{
        unsigned t = start_value;
        start_value = stop_value;
        stop_value = t;
	}
	if (start_value>9 || stop_value>9)
	{
		cout << "Stop value and start value must be less than or equal 9" << endl;
		return 1;
	}
	copy(v1.begin(), v1.end(), v2.begin());
	copy(v1.begin(), v1.end(), v3.begin());
	iter_swap(v2.begin() + start_value, v2.begin() + stop_value);
	swap_ranges(v3.begin() + start_value, v3.begin() + stop_value, v3.begin());
	for_each(v1.begin(), v1.end(), print); cout << endl;
	for_each(v2.begin(), v2.end(), print); cout << endl;
	for_each(v3.begin(), v3.end(), print); cout << endl;
	return 0;
}
