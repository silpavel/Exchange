#include <iostream>
#include <fstream>
#include "menu.h"

using namespace std;
void add()
{
	Human h;
	cout << "set name:";
	cin >> h.name;
	cout << "set age:";
	cin >> h.age;

	ofstream o("humans.txt", ofstream::app);
	o << h.age;
	o << h.name<<'\n';
	o.close();
	system("cls");


}
void show()
{
	ifstream i("humans.txt");
	if (i.is_open())
	{
		Human h;
		while (!i.eof())
		{
			i >> h.age;
			i.getline(h.name,sizeof(h.name));
			cout << h.name << '\t' << h.age << endl;
		}
		system("pause");
		system("cls");
	}
}
bool menu()
{
	//system("CLS");
	cout << "select:\n"
		<< "0. exit\n"
		<< "1. add human\n"
		<< "2. show list\n";
	int select;
	cin >> select;
	system("cls");
	if (select == 1) add();
	if (select == 2) show();
	
	return select;

}
Human *read_human(ifstream *ifs)
{
	Human *h = new Human;
	*ifs >> h->age;
	(*ifs).getline(h->name, 100);
	return h;
}
void read_humans(Humans *hs, char *file)
{
	ifstream ifs(file);
	if (!ifs.is_open()) { cout << "No file!" << endl; return; }
	int i = 0;
	while (ifs.eof())
	{
		hs->h[i] = read_human(&ifs);
		(hs->num)++;
	}
	ifs.close();
	
}




