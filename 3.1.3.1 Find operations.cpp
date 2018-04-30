#include <iostream>
#include <map>
#include <string>

using namespace std;


int main()
{
	map<string, string> capitals = {
		{"China", "Beijing"},
		{"India", "New Delhi"},
		{"Japan", "Tokyo" },
		{"Philippines", "Manila" },
		{"Russia", "Moscow" },
		{"Egypt", "Cairo" },
		{"Indonesia", "Jakarta" },
		{"Democratic Republic of the Congo", "Kinshasa" },
		{"South Korea", "Seoul" },
		{"Bangladesh", "Dhaka" }
	};
	string s;
	getline(cin, s);
    auto f = capitals.find(s);
    if ( f == capitals.end())
        cout << "No such country on the list";
    else
        cout << "The capital of " << f->first << " is " << f->second;
    return 0;
}
