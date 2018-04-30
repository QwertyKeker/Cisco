#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> original_values =
		{ 210, 314, 202, 110, 211, 302, 358, 229, 260, 411, 412, 311, 373, 483 };
	vector<int> noisy_values =
		{ 211, 324, 203, 113, 227, 320, 340, 210, 239, 411, 412, 333, 371, 501 };
    pair<vector<int>::iterator, vector<int>::iterator> p1;
    for( int i = 15;;i++)
    {
        auto it1 = original_values.begin();
        auto it2 = noisy_values.begin();
        bool loop = 1, loop0 = 1;
        if(!loop0)
            break;
            while(loop)
            {
                p1 = mismatch(it1, original_values.end(), it2);
                if (p1.first == original_values.end() && p1.second == noisy_values.end())
                {
                    loop0 = 0;
                    loop = 0;
                }
                else
                {
                if(abs(*p1.first - *p1.second) > i)
                {
                    cout << "First difference greater than " << i << " is found: " << *p1.first << " - " << *p1.second << endl;
                    loop = 0;
                }
                it1 = p1.first + 1;
                it2 = p1.second + 1;
                }
            }
    }
	return 0;
}
