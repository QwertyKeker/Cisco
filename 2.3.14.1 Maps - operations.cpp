#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, int> results = { {"Sarah", 15 }, {"John", 12 }, {"Bart", 17} };
	map<string, int>::iterator it = results.begin();
    for(; it != results.end(); it++)
    {
        cout << it->first << " result is " << it->second;
        cout << endl;
    }
    cout << endl;
    it = results.find("Bart");
    results.erase(it);
    for(it = results.begin(); it != results.end(); it++)
    {
        cout << it->first << " result is " << it->second;
        cout << endl;
    }
    cout << endl;
    results.insert(pair<string, int>("Bob", 16));
    for(it = results.begin(); it != results.end(); it++)
    {
        cout << it->first << " result is " << it->second;
        cout << endl;
    }
	return 0;
}
