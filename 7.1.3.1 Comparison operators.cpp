#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>
#include <vector>

using namespace std;

template <class T> void print(T start, T end)
{
    for ( ;start != end; ++start) {
        cout << *start << " ";
    }
    cout << endl;
}

int main()
{
	vector<int> v1 = { 3, 4, 5, 4, 4, 5, 3, 4 };
	vector<int> v2 = { 3, 3, 2, 1, 5, 6, 9, 4 };
	vector<int> resultsEqual(v1.size());
	vector<int> resultsLess(v1.size());
	vector<int> resultsGreater(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), resultsEqual.begin(), equal_to<int>());
    transform(v1.begin(), v1.end(), v2.begin(), resultsLess.begin(), less<int>());
    transform(v1.begin(), v1.end(), v2.begin(), resultsGreater.begin(), greater<int>());
    print(v1.begin(), v1.end());
    print(v2.begin(), v2.end());
    print(resultsEqual.begin(), resultsEqual.end());
    print(resultsLess.begin(), resultsLess.end());
    print(resultsGreater.begin(), resultsGreater.end());
	return 0;
}
