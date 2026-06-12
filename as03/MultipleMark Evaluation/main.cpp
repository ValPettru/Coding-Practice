#include <iostream>
#include "Header.h"

using namespace std;
using namespace seneca;


int main()
{
    int mn{}; //marks number
    int* marks{};

    cout << "How many marks will you enter? ";
    cin >> mn;

    marks = new int[mn] {};

    for (int i = 0; i < mn; i++)
    {
        cout << "Mark "<< i + 1 << ": ";
        cin >> marks[i];

        cout << "Grade: " << ReturnGrade(marks[i]) << endl;
        printResult(marks[i]);
        cout << endl;
    }
    cout << "Average: " << ReturnAverage(marks, mn) << endl;
    cout << "Total Passes: " << CalculateTotalPasses(marks, mn) << endl;
    cout << "Total Failures: " << CalculateTotalFails(marks, mn) << endl;
    return 0;
}