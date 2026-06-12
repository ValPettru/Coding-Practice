#ifndef SENECA_MARKS_H
#define SENECA_MARKS_H

namespace seneca {

	char ReturnGrade(int mark);
	void printResult(int mark);
	double ReturnAverage(int* marks, int size);
	int CalculateTotalPasses(int* marks, int size);
	int CalculateTotalFails(int* marks, int size);
}

#endif