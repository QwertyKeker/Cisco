#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Triangular
{
    int n, k;
    Triangular(): n(1), k(0) {}
    int operator()()
    {
        k += n;
        n++;
        return k;
    }
};

int main()
{
	vector<int> resultsSmall(6);
	vector<int> results;
	int count;
	cin >> count;
    generate(resultsSmall.begin(), resultsSmall.end(), Triangular());
    results.resize(count);
    generate_n(results.begin(), count, Triangular());
    for (auto i : resultsSmall)
		cout << i << " ";
    cout << endl;
    for (auto i : results)
		cout << i << " ";
	cout << endl;
	return 0;
}
