#pragma once
#ifndef DLLIST_H
#define DLLIST_H
struct Elem {
	int data;
	Elem *next, *prev;
};
//////////////////////
class List {
	Elem *head, *tail;
	int count;
public:
	List();
	List(const List&);
	//~List();
	//Elem* getElem(int);
	void del(int pos = 0);
	void insert(int pos = 0);
	void addTail(int data);
	void addHead(int data);
	void print(int pos);
	void print();
	List &operator=(const List&);
	List operator+(const List&);
	bool operator==(const List&);//равенство списков
	bool operator!=(const List&);//по кол-ву
	bool operator<=(const List&);//too
	bool operator>=(const List&);//too
	bool operator<(const List&);//too
	bool operator>(const List&);//too
	List operator-();
};

//////////////////////-------------------------------
template <class T>
class TestClass {
	T tempo;
public:
	TestClass() { tempo = 0; }
	T testfunc();
};

#endif // DLLIST_H
