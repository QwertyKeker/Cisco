#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void print(const T & value)
{
    cout<<value<<" ";
}

struct sum
{
    int operator()(const int & a, const int & b)
    {
        return a+b;
    }
};

struct mult
{
    int operator()(const int & a, const int & b)
    {
        return a*b;
    }
};

struct Add
{
    int _v;
    Add(int v): _v(v){}
    int operator()(int a)
    {
        return a+_v;
    }
};

int main()
{
	vector<int> valuesA = { 1, 5, 2, 6, 3 };
	vector<int> valuesB = { 2, 3, 1, 3, 4 };
	vector<int> valuesC = { 2, 1, 5, 2, 1 };
	vector<int> results(valuesA.size());
	int value;
	cin >> value;
    transform(valuesB.begin(), valuesB.end(), valuesC.begin(), valuesC.begin(), mult());
    transform(valuesA.begin(), valuesA.end(), valuesC.begin(), valuesC.begin(), sum());
    transform(valuesC.begin(), valuesC.end(), results.begin(), Add(value));
    for_each(results.begin(), results.end(), print<double>);
	return 0;
}
