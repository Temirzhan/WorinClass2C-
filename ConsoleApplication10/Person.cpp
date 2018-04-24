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


// setter имени 
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
	cout <<"Имя - "<<FerstName << endl;
	cout << "Фамилия- "<< SecondName << endl;
	cout <<"Отчество- "<< LastName << endl;
	cout <<"Год рождения " << year_berth << endl;
	cout <<"Пол -  " << gender << endl;
	cout <<"Работа"<< job << endl;
}
