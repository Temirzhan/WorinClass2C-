#pragma once
#include<string>

using namespace std;

class Person
{
private:
	string FerstName;//���
	string LastName;//��������
	string SecondName;//�������
	int year_berth;
	string gender;
	string job;
	char *t;
	char *c;
public:

	Person();
	virtual ~Person();
	// setter ����� 
	void SetFerstName(string name);
	string GetFerstName();
	// Vivod v strokke
	void toString();
};

