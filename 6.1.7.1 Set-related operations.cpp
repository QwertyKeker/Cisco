#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

struct Country
{
	string name;
	int area;
};

typedef vector<Country>::iterator vit;

bool compare(Country lhs, Country rhs)
{
	return lhs.area < rhs.area;
}

void outCountry(vit first, vit second, string op)
{
    vit it;
    if(op == "max")
        it = max_element(first, second, compare);
    else if(op == "min")
        it = min_element(first, second, compare);
    else
        cout << "invalid value of parameter: string op" << endl;
    cout << it -> name << " " << it -> area << endl;
}

int main()
{
	vector <Country> countries = {
		{ "India", 3287 },{ "Argentina", 2780 },
		{ "Brazil", 8515 },{ "Australia", 7692 },
		{ "China", 9572 },{ "United States of America", 9525 },
		{ "Russia", 17098 },{ "Canada", 9984 },
		{ "Kazakhstan", 	2724 },{ "Algeria", 2381 }
	};
	vector <Country> countries_small = {
		{ "Brazil", 8515 },{ "Australia", 7692 },
		{ "Kazakhstan", 	2724 },{ "Algeria", 2381 }
	};
    outCountry(countries.begin(), countries.end(), "min");
    outCountry(countries_small.begin(), countries_small.end(), "min");
    outCountry(countries.begin(), countries.end(), "max");
    outCountry(countries_small.begin(), countries_small.end(), "max");
	return 0;
}
