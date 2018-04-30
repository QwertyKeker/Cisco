#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2;
    unsigned int max_value;
    cin >> max_value;
    if (max_value % 2)
        max_value++;
    for(int i = 1; i <= max_value; i++)
    {
        if(i % 2)
            v1.push_back(i);
        else
            v2.push_back(i);
    }
    for (auto it1 = v1.begin(); it1 != v1.end(); it1++)
	{
		for (auto it2 = v2.begin(); it2 != v2.end(); it2++)
		{
			cout << *it1 + *it2 << " ";
		}
	}
	for (auto it1 = v1.rbegin(); it1 != v1.rend(); it1++)
	{
		for (auto it2 = v2.rbegin(); it2 != v2.rend(); it2++)
		{
			cout << *it1 + *it2 << " ";
		}
	}
	return 0;
}
