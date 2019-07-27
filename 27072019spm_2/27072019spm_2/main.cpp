#pragma warning(disable:4996)
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int menu() {
	cout << "1. add string.\n";
	cout << "2. show all string.\n";
	cout << "3. Exit\n";
	int choice;
	cin >> choice;
	return choice;
}
class Man{
	int age;
	char* name;
	char* surname;
public:
	Man(char* n, char* s, int a);
	Man();
	~Man();
public:
	void put();
	void show();
	void saveToFile();
	static void showFromFile();
};
Man::Man():name(0),surname(0),age(0){}
Man::Man(char* n, char* s, int a) {
	name = new char[strlen(n) + 1];
	if (!name) {
		cerr << "Memory ERR!\n";
		exit(1);
	}
	strcpy(name, n);
	surname = new char[strlen(s) + 1];
	if (!surname) {
		cerr << "Memory ERR!\n";
		exit(1);
	}
	strcpy(surname, s);
	age = a;
}
Man::~Man() {
	delete[] name;
	delete[] surname;
}
void Man::put() {
	char temp[1024];
	cout << "Input name: \n";
	cin>>temp;
	if (name)
		delete[] name;
	name = new char[strlen(temp) + 1];
	if(!name) {
		cerr << "Memory ERR!\n";
		exit(1);
	}
	strcpy(name, temp);
	cout << "Input surname: \n";
	cin>>temp;
	if (surname)
		delete[] surname;
	surname = new char[strlen(temp) + 1];
	if (!surname) {
		cerr << "Memory ERR!\n";
		exit(1);
	}
	strcpy(surname, temp);
	cout << "Age: ";
	cin >> age;
}
void Man::show() {
	cout <<"[__Man:__________]"
		 << "Name: "	 << name
		 << "Surname: "	 << surname
		 << "Age: "		 << age
	     <<"-----------------"
		 << endl;
}
void Man::saveToFile() {
	int size;
	fstream f("men.txt", ios::out | ios::binary | ios::app);
	if (!f) {
		cerr << "Open File ERR!\n";
		exit(2);
	}
	f.write((char*)&age, sizeof(age));
	size = strlen(name);
	//size of name
	f.write((char*)&size, sizeof(int));
	//name
	f.write((char*)&size, size*sizeof(char));
	size = strlen(surname);
	//size of family
	f.write((char*)&size, sizeof(int));
	//family
	f.write((char*)&surname, size*sizeof(char));
	f.close();
}
void Man::showFromFile() {
	fstream f("men.txt", ios::in | ios::binary);
	if(!f) {
		cerr << "Open File ERR!\n";
		exit(3);
	}
	char *n, *s;
	int a;
	int tmp;
	while ( f.read( (char*)&a, sizeof(int) ) ) {
		cout << "Name: ";
		f.read((char*)&tmp, sizeof(int));
		n = new char[tmp + 1];
		if(!n) {
			cerr << "Open File ERR!\n";
			exit(3);
		}
		f.read(n, tmp);
		n[tmp] = '\0';
		cout << n;

		cout << "\nSurname: ";
		f.read((char*)&tmp, sizeof(int));
		s = new char[tmp + 1];
		if (!s) {
			cerr << "Open File ERR!\n";
			exit(3);
		}
		f.read(s, tmp);
		s[tmp] = '\0';
		cout << s;

		cout << "\nAge: " << a << endl;
		f.close();
		delete[] n;
		delete[] s;


	}

}
int main() {
	Man* m;
	do {
		switch (menu()) {
		case 1:
			m = new Man();
			m->put();
			m->saveToFile();
			delete m;
			break;
		case 2:
			Man::showFromFile();
			break;
		case 3:
			cout << "Good by";
			return 0;
		default:
			cout << "OOOOOOOOOOOOOO\n";
		}
	} while (1);
}