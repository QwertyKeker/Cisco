#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;


int main()
{

	map<string, int> variables_map = { {"x", 0}, {"y", 1}, {"z", 2},
			{ "xx", 3 },{ "xy", 4 },{ "xz", 5 } };
	vector<int> values = { 9, 6, 5, 7, 3, 2};
	string variable_name;
	cin >> variable_name;
	map<string, int>::iterator it1 = variables_map.begin();
    for(; it1 != variables_map.end(); it1++)
    {
        cout << "Variable: " << it1->first << " at address: " << it1->second << " has value: " << values[it1->second];
        cout << endl;
    }
    if(variables_map.count(variable_name))
    {
        cout << "Variable: " << variable_name << " at address: " << variables_map.find(variable_name)->second << " has value: " << values[variables_map.find(variable_name)->second];
    }
    else
    {
        cout << "Variable: " << variable_name << " doesn't exist.";
    }
	return 0;
}
