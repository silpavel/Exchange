#pragma once
//structures
struct Date
{
	int day;
	int month;
	int year;

};
struct Employment //место работы
{
	char empName[100]; //наименование работодателя
					   //char *empName;
	int startYear;
	int endYear;
};
struct Resume
{
	char name[100]; //имя сотрудника
	Employment *emp[10]; //место работы
	int numOfEmp; //число мест работы
	Date birthday;

};
//prototype
Employment *createEmployment(char *name, int sy, int ey);
Resume *createResume(char *name, Date birthday);
bool addEmployment(Resume *r, Employment *e);
void printResume(Resume *r);
Employment *findEmployment(Resume *r, char *name);
void printEmployment(Employment *e);
Employment *findEmploymentByYear(Resume *r, int year);