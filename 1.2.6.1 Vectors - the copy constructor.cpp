#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <string> ip_table {"127.0.0.1", "192.168.0.1", "192.168.1.100", "255.255.255.255" };
    vector <string> v2(ip_table);
    int ip_num;
    cin >> ip_num;
    while(ip_num > v2.size())
    {
        cout << "Too big - value must be smaller than or equal to vector size.\n";
        cin >> ip_num;
    }
    for(int i = 0; i < ip_num; i++)
    {
        cout << v2[i] << " ";
    }
	return 0;
}
