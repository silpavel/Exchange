#include "QueueRing.h"
#include <iostream>
using namespace std;
QueueRing::QueueRing(int m) {
	maxQueueLenght = m;
	wait = new int[maxQueueLenght];
	queueLenght = 0;
	first = 0;
}
QueueRing::~QueueRing() { delete[] wait; }
void QueueRing::clear() { queueLenght = 0; };
bool QueueRing::isEmpty() { return queueLenght == 0; }
bool QueueRing::isFull() { return queueLenght == maxQueueLenght; }
int QueueRing::getCount() { return queueLenght; }
int QueueRing::add(int c) {
	if (!isFull()) {
		wait[queueLenght++] = c;
		return 1;
	}
	else
		return 0;
}
int QueueRing::extract() {
	if (!isEmpty()) {
		int tmp = wait[0];
		for (int i = 1; i < queueLenght; i++)
			wait[i - 1] = wait[i];
		queueLenght--;
		wait[queueLenght - 1] = tmp;
		return tmp;
	}
	else
		return -1;
}
void QueueRing::show() {
	for (int i = 0; i < queueLenght; i++)
		cout << wait[i] << ' ';
	cout << endl;
}
