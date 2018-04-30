#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> v {1, 2, 3, 3, 4, 5, 6, 6, 7};
    auto p1 = equal_range(v.begin(), v.end(),3);
    auto p2 = equal_range(v.begin(), v.end(),6);
    for(auto it = p1.first; it < p2.second; it++)
        cout << *it << " ";
	return 0;
}
