#include "stdafx.h"
#include "Person.h"
#include<iostream>
#include<locale>


using namespace std;


Person::Person()
{

}


Person::~Person()
{

}


// setter ����� 
void Person::SetFerstName(string name)
{
	FerstName = name;

}


string Person::GetFerstName()
{
	cout << FerstName << endl;
	return FerstName;
}


// Vivod v strokke
void Person::toString()
{
	cout <<"��� - "<<FerstName << endl;
	cout << "�������- "<< SecondName << endl;
	cout <<"��������- "<< LastName << endl;
	cout <<"��� �������� " << year_berth << endl;
	cout <<"��� -  " << gender << endl;
	cout <<"������"<< job << endl;
}
