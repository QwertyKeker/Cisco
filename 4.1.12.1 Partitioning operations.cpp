#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
void print(const T & value)
{
    cout<<value<<" ";
}

struct Find3
{
    bool operator()(const int & a)
    {
        if ((a % 10 == 3) || (a / 10 == 3) || (a % 3 == 0))
            return true;
        else
            return false;
    }
};

int main()
{
	vector<int> results(40);
    for(int i = 1; i <= 40; i++)
    {
        results[i-1] = i;
    }
    vector<int>::iterator it = partition(results.begin(), results.end(), Find3());
    for_each(results.begin(), it, print<int>);
    cout<<endl;
    for_each(it, results.end(), print<int>);
	return 0;
}
