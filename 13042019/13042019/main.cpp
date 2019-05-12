#include "structs.h"
#include <iostream>
using namespace std;
int main()
{
	Boilers myBoilers;
	char select=' ';
	while (select != 'q')
	{
		system("CLS");
		cout << "Select function:\n"
			 << "n: add new Boiler\n"
			 << "a: show all boilers\n"
			 << "x: delete boiler with the number\n"
			 << "d: delete all list\n"
			 << "q: for exit\n"
			 <<"> ";
		cin >> select;
		cout << endl;
		
		if (select == 'n') myBoilers.addBoiler();
		if (select == 'a') myBoilers.showAll();
		if (select == 'd') myBoilers.delAll();
		if (select == 'x') myBoilers.del();
	}
	
	
	system("pause");
	return 0;
}