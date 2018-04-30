#include <vector>
#include <iostream>

using namespace std;
int main()
{
	vector <float> v(5);
	float inp;
	float sum = 0;
	cin >> inp;
    v[0] = inp;
    v[1] = inp + 5.F;
    v[2] = inp + 0.5;
    v[3] = inp + 2.3;
    v[4] = inp + 4.7;
    for (vector<float>::const_iterator it = v.begin(); it != v.end(); ++it)
	{
		sum += *it;
	}
    cout << sum << endl << sum / 5;
	return 0;
}
