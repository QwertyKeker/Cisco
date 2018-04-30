#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctype.h>
#include <string>

using namespace std;

template<class T>
void print(const T & value)
{
	cout << value << " ";
}

char t(char c)
{
	return tolower(c);
}

string toLower(const string & v)
{
	string ret(v);
	transform(ret.begin(), ret.end(), ret.begin(), t);
	return ret;
}


bool ascending_caseinsensitive(const string & a, const string & b)
{
	return toLower(a) < toLower(b);
}


int main()
{
	vector <string> v1 = { "A0", "a1", "a0", "a2", "a3", "A4", "aA", "Ab", "AB", "b4" };
	vector <string> v2(v1);
	cout << int('A') << " " << int('a') << " "  << int('0') << endl << endl; //check these values
	cout << "Source collection:\n";
	cout << "v1: ";
	for_each(v1.begin(), v1.end(), print<string>); cout << endl;

	cout << "Sorting in ascending order:\n";
	cout << "Normal sort:\n";
	sort(v1.begin(), v1.end());
	cout << "v1: "; for_each(v1.begin(), v1.end(), print<string>); cout << endl;
	cout << "Stable sort:\n";
	stable_sort(v2.begin(), v2.end(), ascending_caseinsensitive);
	cout << "v2: "; for_each(v2.begin(), v2.end(), print<string>); cout << endl << endl;

	return 0;
}
