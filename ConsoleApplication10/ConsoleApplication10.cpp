// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<locale>
#include"Person.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Person NewMen;
	NewMen.toString();
	NewMen.SetFerstName("Lola");
	string Ferstname = NewMen.GetFerstName();
	NewMen.toString();
	system("pause");
    return 0;
}

