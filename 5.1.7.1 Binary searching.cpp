#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Country
{
	string name;
	int area;

	static bool compare_country(const Country&, const Country&);
};

bool Country::compare_country(const Country& a, const Country& b)
{
    return a.area < b.area;
}

int main()
{
	vector <Country> countries = {
		{"India", 3287 },{ "Argentina", 2780 },
		{"Brazil", 8515}, {"Australia", 7692},
		{"China", 9572 },{ "United States of America", 9525 },
		{"Russia", 17098 },{ "Canada", 9984 },
		{"Kazakhstan", 	2724 }, {"Algeria", 2381 }
	};
    int area;
    sort(countries.begin(), countries.end(), Country::compare_country);
    cout << "Please, enter area to find or Ctrl+Z to exit: ";
    while(cin >> area)
    {
        if (binary_search(countries.begin(), countries.end(), Country {"", area}, Country::compare_country))
            cout << "Found" << endl;
        else
            cout << "Not found" << endl;
	}
	return 0;
}
