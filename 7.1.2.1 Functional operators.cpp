#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>
#include <vector>
#include <numeric>

using namespace std;

typedef vector<double>::iterator it;

template<class T> print(T startGr, T endGr, T startWe, T endWe)
{
    T temp;
    temp = startGr;
    cout << "Grades: " << endl;
    for ( ;temp != endGr; ++temp) {
        cout << *temp << " ";
    }
    cout << endl << "Weighted grades: " << endl;
    temp = startWe;
    for ( ;temp != endWe; ++temp) {
        cout << *temp << " ";
    }
    cout << endl << "Sum of weighted values: " << endl;
    double sum = accumulate(startWe, endWe, 0.0, plus<double>());
    cout << sum;
    cout << endl << "Average of weighted values: " << endl;
    cout << sum/distance(startWe, endWe)  << endl;
}
int main()
{
	vector<double> student1Grades = { 3, 4, 5, 4, 4.5, 5, 3.5, 4 };
	vector<double> student2Grades = { 5, 4.5, 5, 4.5, 3, 3, 3.5, 5 };
	vector<double> gradeWeights =  { 0.05, 0.15, 0.1, 0.2, 0.05, 0.3, 0.1, 0.05 };
	vector<double> weighted1(8);
	vector<double> weighted2(8);
    transform(student1Grades.begin(), student1Grades.end(), gradeWeights.begin(), weighted1.begin(), multiplies<double>());
    transform(student2Grades.begin(), student2Grades.end(), gradeWeights.begin(), weighted2.begin(), multiplies<double>());
    cout << "Grades of first student" << endl;
    print(student1Grades.begin(), student1Grades.end(), weighted1.begin(), weighted1.end());
    cout << endl << "Grades of second student" << endl;
    print(student2Grades.begin(), student2Grades.end(), weighted2.begin(), weighted2.end());
	return 0;
}
