#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void square(int & value)
{
    cout << value * value << " ";
}

int main()
{
	vector<int>v1 = { 3, 5, 6, 8, 9};
    for_each(v1.begin(), v1.end(), square);
    cout << endl;
    for_each(v1.rbegin(), v1.rend(), square);
	return 0;
}
