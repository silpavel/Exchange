#include <iostream>
#include "resume.h"
using namespace std;
#pragma warning(disable:4996)

Employment *createEmployment(char *name, int sy, int ey)
{
	Employment *e = new Employment{ "",sy,ey };
	strcpy(e->empName, name);
	return e;
}
Resume *createResume(char *name, Date birthday)
{
	Resume *r = new Resume{ "",{ 0,0,0, 0,0,0, 0 },-1, birthday };// -1 is blank resume (zero employment)
	strcpy(r->name, name);
	return r;
}
bool addEmployment(Resume *r, Employment *e)
{
	if (r->numOfEmp == 9) return 0;
	r->emp[++(r->numOfEmp)] = e;
	return 1;
}
void printResume(Resume *r)
{
	cout << "Name: " << r->name << '\t' << "Birthday: " << r->birthday.day << '.' << r->birthday.month << '.' << r->birthday.year << endl;
	for (int i = 0; i <= r->numOfEmp; i++)
	{
		printEmployment( r->emp[i] );// <---
	}
}
Employment *findEmployment(Resume *r, char *name)
{
	Employment *e;
	for (int i = 0; i <= r->numOfEmp; i++)
		if ( strcmp((r->emp)[i]->empName, name) == 0)//take any employment and check name of employment
			return (r->emp)[i];
	return 0;
}
void printEmployment(Employment *e)
{
	if (e)
		cout << e->empName << '\t' << e->startYear << '\t' << e->endYear << endl;
	else
		cout << "not find\n";
}
Employment *findEmploymentByYear(Resume *r, int year)
{
	Employment *e;
	for (int i = 0; i <= r->numOfEmp; i++)
		if( (r->emp)[i]->startYear <= year && year <= (r->emp)[i]->endYear )//take any employment and check name of employment
			return (r->emp)[i];
	return 0;
}











