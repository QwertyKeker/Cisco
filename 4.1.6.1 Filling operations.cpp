#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct sum
{
    int operator()(const int & a, const int & b)
    {
        return a+b;
    }
};

struct sub
{
    int operator()(const int & a, const int & b)
    {
        return a-b;
    }
};

int main()
{
	vector<int> values = { 6, 5, 7, 3, 4, 6, 5, 7, 3, 4 };
    vector<int> v2(values.size());
    vector<int> v3(values.size());
    vector<int> v4(values.size());
    vector<int> v5(values.size());
    fill(v2.begin(), v2.end(), 3);
    fill(v3.begin(), v3.end(), 2);
    unsigned val = 11;
    while(val > 10)
        cin >> val;
    fill_n(values.begin(), val, 5);
    transform(values.begin(), values.end(), v2.begin(), v4.begin(), sum());
    transform(values.begin(), values.end(), v3.begin(), v5.begin(), sub());
    for (auto i : v4)
		cout << i << " ";
    cout << endl;
    for (auto i : v5)
		cout << i << " ";
	cout << endl;
	return 0;
}
