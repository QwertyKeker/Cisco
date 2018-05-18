#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    string token;
    while(getline(ss, token, ':'))
    {
        cout << token << '\n';
    }
	return 0;
}
