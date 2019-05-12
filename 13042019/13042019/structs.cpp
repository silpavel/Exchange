#include <iostream>
#include "structs.h"
using namespace std;
Boilers::Boiler::Boiler()
{
	char c[1];
	cin.getline(c,1);
	cout << "Set vender: ";
	cin.getline(vender, 20);
	cout << "Set power: ";
	cin>>power;// watt
	cout << "Set weight: ";
	cin>> weight;
	cout << "Set count heat litres in second: ";
	cin>>litresInSecond;//heat litres in second
}

void Boilers::addBoiler()
{
	realCountBoilers++;//up count of boilers
	blr[realCountBoilers] = new Boiler();//make a new boiler
}
void Boilers::showAll()
{
	for (int i = 0; i <= realCountBoilers; i++)
	{
		cout << i <<": "<< blr[i]->vender << '\t' << blr[i]->power << '\t'
			 << blr[i]->litresInSecond << '\t' << blr[i]->weight << endl;
	}
	system("pause");
}
void Boilers::delAll()
{
	for (int i = 0; i <= realCountBoilers; i++)
		delete blr[i];//delete all boilers if delete Boilers object
	realCountBoilers = -1;//count of element is zero
}
void Boilers::del()
{
	cout << "Set index: ";
	int index;
	cin >> index;
	if (index < 0 || index > realCountBoilers  || realCountBoilers==-1)// out of range or list is empty
	{
		cout << "Incorrect index!";
		return;
	}
	delete blr[index];
	for (int i = index; i <realCountBoilers ; i++)
	{
		blr[i] = blr[i + 1];//2 <- 3, 3 <- 4, 4 <- 5 
	}
	realCountBoilers -= 1;
}
Boilers::~Boilers()
{
	delAll();
}




