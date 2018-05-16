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

Country mult(Country a, int b)
{
    return Country{a.name, a.area * b};
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
    vector <Country> countriesBig(countries.size());
    transform(countries.begin(), countries.end(), countriesBig.begin(),  bind2nd(ptr_fun(mult), 1000));
    for( Country i: countriesBig)
    {
        cout << i.name << " " << i.area;
        cout << endl;
    }
    return 0;
}
