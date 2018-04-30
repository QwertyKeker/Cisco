#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s1;
	set<int> s2;
	unsigned start_value;
	cin >> start_value;
	unsigned stop_value;
	cin >> stop_value;
    for(unsigned i = start_value; i <= stop_value; i++)
    {
        i%2?s1.insert(i):s2.insert(i);
    }
    for(unsigned i = start_value; i <= stop_value; i++)
    {
        i%2?s2.insert(i):s1.insert(i);
    }
    for(set<int>::iterator it1 = s1.begin(); it1 != s1.end(); it1++)
    {
        for(set<int>::iterator it2 = s2.begin(); it2 != s2.end(); it2++)
        {
            cout << *it1 + *it2 << " ";
        }
        cout << endl;
    }
    for(set<int>::reverse_iterator it1 = s1.rbegin(), it2 = s2.rbegin(); it1 != s1.rend(); it1++, it2++)
    {
        cout << *it1 + *it2 << " ";
    }
    cout << endl;
    for(auto it1 = s1.rbegin(), it2 = s2.rbegin(); it1 != s1.rend(); it1++, it2++)
    {
        cout << *it1 + *it2 << " ";
    }
	cout << endl;
	return 0;
}
