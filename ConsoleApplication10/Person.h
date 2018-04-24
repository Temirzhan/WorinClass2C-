#pragma once
#include<string>

using namespace std;

class Person
{
private:
	string FerstName;//Имя
	string LastName;//Отчество
	string SecondName;//Фамилия
	int year_berth;
	string gender;
	string job;
	char *t;
	char *c;
public:

	Person();
	virtual ~Person();
	// setter имени 
	void SetFerstName(string name);
	string GetFerstName();
	// Vivod v strokke
	void toString();
};

