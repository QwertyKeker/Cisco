#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	vector<int> values = { 8, 1, 5, 6, 7 };
	vector<int> rotated = {5, 6, 7, 8, 1};
    auto it = rotated.begin();
    advance(it,3);
    rotate(rotated.begin(), it, rotated.end());
	if (rotated== values)
		cout << "You did it." << endl;
	else
		cout << "Try again." << endl;
	return 0;
}
