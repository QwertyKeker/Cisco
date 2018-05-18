#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string filename  = "filename.txt";
    ifstream file(filename);
    string out;
    bool even = false;
    if (file.good() != true)
    {
        cout << "File error: couldn't open.";
        return 1;
    }
    while(getline(file, out))
    {
        if(even)
        {
            cout << out << " ";
            even = false;
        }
        else
            even = true;
    }
    file.close();
	return 0;
}
