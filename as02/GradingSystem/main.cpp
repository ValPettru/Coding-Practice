#include <iostream>
#include "GradingSystem.h"

using namespace std;
using namespace seneca;


int main()
{
    int mark;

    cout << "Please enter the mark: ";
    cin >> mark;

    while (mark < 0 || mark > 100)
    {
        cout << "ERROR! The mark must be between 0 and 100. Please try again: ";
        cin >> mark;
    }

    cout << "Mark: " << mark << endl;
    printGrade(mark);
    printResult(mark);

    return 0;
}