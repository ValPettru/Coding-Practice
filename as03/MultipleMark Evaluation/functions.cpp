#include <iostream>
#include "Header.h"

using namespace std;

namespace seneca {
	char ReturnGrade(int mark)
	{
		char grade = 'F';

        if (mark >= 80 && mark <= 100)
        {
            grade = 'A';
        }
        else if (mark >= 70 && mark <= 79)
        {
            grade = 'B';
        }
        else if (mark >= 60 && mark <= 69)
        {
            grade = 'C';
        }
        else if (mark >= 50 && mark <= 59)
        {
            grade = 'D';
        }
        else if (mark < 50)
        {
            grade = 'F';
        }
        return grade;
	}
    void printResult(int mark)
    {
        cout << "Result: ";

        if (mark >= 50)
        {
            cout << "Pass";
        }
        else
        {
            cout << "Fail";
        }

        cout << endl;
    }
    double ReturnAverage(int* marks, int size)
    {
        double avg = 0;
        for ( int i = 0; i < size; i++)
        {
            avg += marks[i];
        }
        return avg / size;
    }
    int CalculateTotalPasses(int* marks, int size)
    {
        int totalPasses = 0;
        for (int i = 0; i < size; i++)
        {
            if (marks[i] >= 50)
            {
                totalPasses++;
            }
        }
        return totalPasses;
    }
    int CalculateTotalFails(int* marks, int size)
    {
        int totalFails = 0;
        for (int i = 0; i < size; i++)
        {
            if (marks[i] < 50)
            {
                totalFails++;
            }
        }
        return totalFails;
    }
}