#pragma once
#ifndef SMART_H
#define SMART_H
#include <iostream>
using namespace std;
class temp {
	int t;
public:
	void show() { cout <<"temp="<< t << endl; }
	void set(int i) { t = i; }

};
class smart_ptr {
	temp* ptr;
	int counter;
public:
	smart_ptr(temp *p = 0x0) {
		counter = 0;
		ptr = p;
	}

	smart_ptr(const smart_ptr &obj) {//коструктор копирования
		ptr = obj.ptr;
		counter++;//считаем число объектов (число копий на один и тот же объект)
	}
	smart_ptr operator=(const smart_ptr &obj) {
		ptr = obj.ptr;
		counter++;//считаем число объектов (число копий на один и тот же объект)
		return *this;
	}
	~smart_ptr() {
		if (ptr && counter == 0) {
			std::cout << "delete obj\n";
			delete[] ptr;
		}
		else {
			counter--;
			std::cout << "del copy\n";
		}
	}
	temp *operator->() {
		return ptr;
	}
};
#endif SMART_H
