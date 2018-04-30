#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> results(20);
    for(int i = 0; i < 20; i++)
    {
        results[i] = i + 1;
    }
    auto it_low = lower_bound(results.begin(), results.end(), 5);
    auto it_upp = upper_bound(results.begin(), results.end(), 11);
    for (auto it = it_low; it < it_upp; it++)
        cout << *it << " ";
	return 0;
}
