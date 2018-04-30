
#include <iostream>
#include <set>

using namespace std;

void killMePlzV2point0(multiset<double> st, double v1, double v2)
{
    //��� ��������� �� ������ ������������� �������, �� �� � ��� �� �����, �� �� ��� ��������� �������. �������� ������� ��� ������� ������:
    if( v2 < *st.rbegin() && v2 > v1) //�����
    {
        multiset<double>::iterator it1 = st.lower_bound(v1);
        multiset<double>::iterator it2 = st.upper_bound(v2);
        double sum = *it1; //� �����
        for(; it1 != it2; it1++)
        {
            sum += *it1;
        }
        cout << sum << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}

int main() {

	multiset <double> valuesA = { 1.1, 2.3, 2.7, 2.9, 3.5 };
	multiset <double> valuesB = { 2.5, 2.7, 3.14, 3.5, 3.5, 4.5 };
	double start_value, stop_value;
	cin >> start_value;
	cin >> stop_value;
    killMePlzV2point0(valuesA, start_value, stop_value);
    killMePlzV2point0(valuesB, start_value, stop_value);
    return 0;
}
