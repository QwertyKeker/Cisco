#include <iostream>
#include <map>
#include <string>

using namespace std;


int main()
{
	map<char, int> building1 = { { 'a', 30 },{ 'b', 40 } };
	map<char, int> building2 = { { 'a', 50 },{ 'b', 25 }, {'c', 11} };
	map<char, int> building3 = { { 'a', 20 },{ 'b', 35 } };
	map<int, map<char, int>> buildings = {
		{1, building1 },
		{2, building2 },
		{3, building3 }
	};
	for (auto building : buildings)
	{
		for (map<char, int>::iterator it = building.second.begin(); it != building.second.end(); it++)
		{
			cout << "Building number: " << building.first
				 << " letter: " << it->first << " has: "
				 << it->second << " square meters." << endl;
		}
	}
	return 0;
}
