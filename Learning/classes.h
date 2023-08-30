#pragma once
#include <string>
using namespace std;
#ifndef MYHEADER_H
#define MYHEADER_H

//cntrl K cntrl D



class Employee {
public:
	string Name;
	int Age;
	virtual double Salary() {
		return 44000;
	}

};


class Developper : Employee {
public:
	double Salary() {
		return 50000;
	}
};

#endif


