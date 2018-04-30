#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Check
{
    int _v;
    Check(int v): _v(v){}
    bool operator()(int a)
    {
        if(abs(a - _v) < 1000000)
            return true;
        else
            return false;
    }
};

int main()
{
	vector<int> populations =
		{ 24256800, 23500000, 21516000, 12038175, 16970105,
		  16787941, 16060303, 14025000, 13513734, 12478447 };
	int new_value;
	cin >> new_value;
    replace_if(populations.begin(), populations.end(), Check(new_value), new_value);
    for (auto i : populations)
		cout << i << " ";
	return 0;
}
