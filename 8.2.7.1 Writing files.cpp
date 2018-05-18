#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
	string filename  = "filename.txt";
    ifstream fileIn(filename);
    fstream fileOut("tempFile.txt");
    string temp;
    vector<string> outStr;
    int three = 0;
    if (fileIn.good() != true)
    {
        cout << "File error: couldn't open.";
        return 1;
    }
    while(getline(fileIn, temp))
    {
        outStr.push_back(temp);
    }
    for( int i = 0; i < outStr.size(); i++)
    {
        fileOut << i + 1 << ":" << outStr[i] << endl;
    }
    fileOut.close();
    fileOut.open("tempFile.txt", fstream::in);
    while(getline(fileOut, temp))
    {
        if(three == 3)
            break;
        cout << temp << endl;
        three++;
    }
    fileIn.close();
    fileOut.close();
	return 0;
}
