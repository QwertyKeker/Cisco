#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void f_patt(vector<int> values, vector<int> relations, vector<int> pattern)
{
    vector<int>::iterator it = relations.begin();
    while ( it != relations.end())
    {
        it = search(it, relations.end(), pattern.begin(), pattern.end());
        if(it == relations.end())
            break;
        int dist = distance(relations.begin(), it);
        cout << "Pattern found, values at " << dist << ": ";
        for(vector<int>::iterator it1 = values.begin() + dist; it1 != values.begin() + dist + 4; it1++)
        {
            cout << *it1 << " ";
        }
        cout << endl;
        it ++;

    }
}

int main()
{
	vector<int> values = { 1, 1, 5, 3, 4, 4, 3, 2, 2, 4, 4, 5, 3, 8, 8, 1};
    vector<int> relations;
    for(vector<int>::iterator it = values.begin() + 1; it != values.end(); it++)
    {
        if( *it == *(it - 1))
            relations.push_back(0);
        else if(*it > *(it - 1))
            relations.push_back(1);
        else
            relations.push_back(-1);
    }
    vector<int> patt1 = { 0, 1, -1 };
	vector<int> patt2 = { -1, 1, 0 };
    f_patt(values, relations, patt1);
    f_patt(values, relations, patt2);
	return 0;
}
