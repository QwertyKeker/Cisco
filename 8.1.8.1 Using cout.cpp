#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string s= "The quick brown fox jumps over the lazy dog";
    unsigned start_value, stop_value;
    while(true)
    {
        cout << "Enter start value: ";
        cin >> start_value;
        cout << "Enter stop value: ";
        cin >> stop_value;
        if(start_value > stop_value)
            cout << "Stop value must be greater than or equal to start value." << endl;
        else if(start_value > 42 || stop_value > 42)
            cout << "Stop value and start value must be less than or equal to 42." << endl;
        else
            break;
    }
    for(int i = start_value; i <= stop_value; i++)
    {
        if(!iswspace(s[i]))
            cout << s[i] << " ";
    }
	cout << endl;
	return 0;
}
