#pragma once
#ifndef SMART_H
#define SMART_H
#include <iostream>
#include <stdarg.h>
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

	smart_ptr(const smart_ptr &obj) {//���������� �����������
		ptr = obj.ptr;
		counter++;//������� ����� �������� (����� ����� �� ���� � ��� �� ������)
	}
	smart_ptr operator=(const smart_ptr &obj) {
		ptr = obj.ptr;
		counter++;//������� ����� �������� (����� ����� �� ���� � ��� �� ������)
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
int sum(int a, ...) {
	int *p = &a;
	int sm = 0;
	for (; --a;) {
		sm += *(++p);
	}
	return sm;
}
int sum2(int k,...) {//����� ��������� �� ����������, ��������� ��������� ������� ����� ��������� � ������� ���������
	int *p = &k;
	int sum = 0;
	while (*p) {
		sum += *(p++);
	}
	return sum;
}
void anytype(int count, bool type, ...) {
	int sumi = 0;
	double sumd = 0.0;
	va_list args;//����� ���������� stdarg.h
	va_start(args, count); 
	va_arg(args, bool);//���������� ��������� � ���������� ��������
	while (count--) {
		(type) ? sumi += va_arg(args, int) : sumd += va_arg(args, double);
	}
	va_end(args);
	(type) ? cout << sumi : cout << sumd;
}
#endif SMART_H
