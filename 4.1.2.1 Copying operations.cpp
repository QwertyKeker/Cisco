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
	if(start_value > stop_value)
    {
        cout << "Stop value must be greater than or equal to start value.";
        return 1;
    }
    if(start_value > 9 || stop_value > 9)
    {
        cout << "Stop value and start value must be less than or equal to 9.";
        return 1;
    }
	vector<int>::iterator it = v2.begin();
    for(int i = start_value; i <= stop_value; i++)
    {
        *it = v1[i];
        it++;
    }
    copy(v1.begin()+start_value, v1.begin()+stop_value+1, v3.begin());
	for_each(v1.begin(), v1.end(), print); cout << endl;
	for_each(v2.begin(), v2.end(), print); cout << endl;
	for_each(v3.begin(), v3.end(), print); cout << endl;
	return 0;
}
