#pragma once
#ifndef MYCLASS_H
#include <iostream>
using namespace std;
class temp {
	int t;
public:
	temp():t(25) {}
	friend ostream &operator<<(ostream &out, temp &tt);
	void show();
	void set(int temp) {
		t = temp;
	}
};
//умный указатель _/_
class my_ptr {
	temp *ptr;
public:
	my_ptr(temp *p) :ptr(p) {}
	operator temp*() { return ptr; }//(int)c
	temp* operator->() { return ptr; }// ->
	my_ptr operator++() {//a[0] next a[1]
		ptr++;
		return *this;
	}
	my_ptr operator++(int) {
		ptr++;
		return *this;
	}
};
#define MYCLASS_H
#endif MYCLASS_H
