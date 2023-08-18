#pragma once
#include<iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Employee
{
protected:
	string name;
	string position;
	float salary;
public:

	Employee();
	Employee(string name, string position, float salary);

	virtual void show()const;
	virtual float calcSalary()const;



};

