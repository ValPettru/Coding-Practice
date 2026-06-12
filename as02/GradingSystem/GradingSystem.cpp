#include <iostream>
#include "GradingSystem.h"

using namespace std;

namespace seneca {

    void printGrade(int m)
    {
        char grade = 'F';
        cout << "Grade: ";

        if (m >= 80 && m <= 100)
        {
            grade =  'A';
        }
        else if (m >= 70 && m <= 79)
        {
            grade = 'B';
        }
        else if (m >= 60 && m <= 69)
        {
            grade = 'C';
        }
        else if (m >= 50 && m <= 59)
        {
            grade = 'D';
        }
        else if (m < 50)
        {
            grade = 'F';
        }
        cout << grade <<endl;
    }
    void printResult(int m)
    {
        cout << "Result: ";

        if (m >= 50)
        {
            cout << "Pass";
        }
        else
        {
            cout << "Fail";
        }

        cout << endl;
    }
}
