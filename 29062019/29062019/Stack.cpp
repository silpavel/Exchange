#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack() : top(EMPTY) {}
void Stack::clear()   { top = EMPTY; }
bool Stack::isEmpty() {	return top == EMPTY; }
bool Stack::isFull()  { return top == FULL;  }
int  Stack::getCount() { return top+1; }
bool Stack::push(char c) {
	if (!isFull()) {
		st[++top] = c;
		return 1;
	}else
		return 0;
}
char Stack::pop() {
	if (!isEmpty()) {
		return st[top--];
	}
	else
		return 0;
}
void Stack::show() {
	for (int i = 0; i <= top; i++)
		cout << st[i] << ' ';
	cout << endl;
}
