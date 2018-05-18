#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string introduction = "My name is ";
    string rest_of_string;
    cout << "Please, write down your name: " << endl;
    while(true)
    {
        getline(cin, rest_of_string);
        if (rest_of_string.substr(0, introduction.length()) == introduction)
            break;
        cout << "Hi, please introduce yourself." << endl;
    }
    cout << "Hi, " << rest_of_string.substr(introduction.size()) << "!" ;
	return 0;
}
