// OutputFormats.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "OutputFormats.h"


int main()
{
	std::string vNames[2] = {"last, first", "first, last"};
	int vAge[2] = { 24, 42 };
	double vSalary[] = { 4600.34, 6400.43 };

	cout << "Full Name \t Age \t Salary \t Salary" << endl << endl;
	for (size_t i = 0; i < 2; i++)
	{
		cout << vNames[i].c_str() << setw(20 - vNames->size()) << vAge[i] << '\t' << fixed << vSalary[i] << '\t' << scientific << vSalary[i] << endl << endl;
		cout.unsetf(ios::fixed | ios::scientific);
	}

	cin.get();

    return 0;
}

