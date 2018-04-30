#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	vector<int> values = { 1, 5, 6, 7, 8 };
    int arr[5];
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    vector<int> v2(arr, arr+5);
    reverse(v2.begin(), v2.end());
    if(values == v2)
        cout << "Palindrome.";
    else
        cout << "Not palindrome.";
	return 0;
}
