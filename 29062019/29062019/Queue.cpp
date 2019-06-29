#include "Queue.h"
#include <iostream>
using namespace std;
Queue::Queue(int m) {
	maxQueueLenght = m;
	wait = new int[maxQueueLenght];
	queueLenght = 0;
	first = 0;
}
Queue::~Queue() {delete[] wait;}
void Queue::clear()   { queueLenght = 0; };
bool Queue::isEmpty() { return queueLenght==0; }
bool Queue::isFull()  { return queueLenght == maxQueueLenght; }
int Queue::getCount() {return queueLenght;}
int Queue::add(int c) {
	if (!isFull()) {
		wait[queueLenght++] = c;
		return 1;
	}
	else
		return 0;
}
int Queue::extract() {
	if (!isEmpty()) {
		int tmp = wait[0];
		for (int i = 1; i < queueLenght; i++) {
			wait[i - 1] = wait[i];
		}
		queueLenght--;
		return tmp;
	}else
		return -1;
}
void Queue::show() {
	for (int i = 0; i < queueLenght; i++)
		cout << wait[i] << ' ';
	cout << endl;
}

