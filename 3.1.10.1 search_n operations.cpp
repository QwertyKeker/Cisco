#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void print_found(vector<int> values, int value)
{
    vector<int>::iterator it = values.begin();
    for(int i = 1;i != -1;i++)
    {
        it = search_n(it, values.end(), i, value);
        if(it == values.end())
        {
            i = -1;
            break;
        }
        cout << value << " found " << i << " time(s) at: " << distance(values.begin(), it) ;
        cout << endl;
    }
}

int main()
{
	vector<int> values =
		{ 11, 11, 21, 21, 30, 11, 11, 11, 17, 21, 21, 21, 11, 11, 11, 11 };
	print_found(values, 11);
	print_found(values, 21);
	return 0;
}
