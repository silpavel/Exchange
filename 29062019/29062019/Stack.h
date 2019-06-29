#pragma once
#ifndef STACK_H
#define STACK_H
class Stack {
	enum {EMPTY=-1,FULL=20};
	char st[FULL + 1];
	int top;
public:
	Stack();
	bool push(char c);
	char pop();
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount();
	void show();
};
#endif
