#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Fill
{
    int n;
    Fill(): n(0) {}
    int operator()()
    {
        n++;
        return n;
    }
};

struct Div
{
    bool operator()(const int & a)
    {
        return a % 3 == 0;
    }
};

int main()
{
	vector<int> results;
	int count;
	cin >> count;
    results.resize(count);
    generate(results.begin(), results.end(), Fill());
    vector<int>::iterator it = remove_if(results.begin(), results.end(), Div());
    results.erase(it, results.end());
    for (auto i : results)
		cout << i << " ";
	cout << endl;
	return 0;
}
