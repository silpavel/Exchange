#include <iostream>
#include "resume.h"


using namespace std;

int main()
{
	//put code there
	Resume *r = createResume("Petrov", {11,10,1975});

	Employment *e = createEmployment("SB", 2017, 2019);
	addEmployment(r,e);
	
	e = createEmployment("VTB24", 2015, 2017);
	addEmployment(r, e);
	
	e = createEmployment("SBB", 2013, 2015);
	addEmployment(r, e);
	
	printResume(r);
	//find
	cout << "==================find\n";
	Employment *e2 = findEmployment(r, "VTB24");
	printEmployment(e2);
	//find
	cout << "year:" << 2016 << endl;
	Employment *e3 = findEmploymentByYear(r, 2016);
	printEmployment(e3);
	
	//end code
	system("pause");
	return 0;
}

