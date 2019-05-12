#include <fstream>
#include <iostream>
#include "menu.h"
using namespace std;




int main()
{
	Humans h;
	//while (menu());
	read_humans(&h, "humans.txt");
	for (int i = 0; i <= h.num; i++)
		cout << h.h[i]->name << '\t' << h.h[i]->age << endl;
	


	system("pause");
	return 0;
}
