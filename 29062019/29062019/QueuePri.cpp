#include "QueuePri.h"
#include <iostream>
using namespace std;
//number(priority)
QueuePri::QueuePri(int m) {
	maxQueueLenght = m;
	wait = new int[m];
	pri = new int[m];
	queueLenght = 0;//empty
}
QueuePri::~QueuePri() {
	delete[] wait;
	delete[] pri;
}
void QueuePri::clear() { queueLenght = 0; };
bool QueuePri::isEmpty() { return queueLenght == 0; }
bool QueuePri::isFull() { return queueLenght == maxQueueLenght; }
int QueuePri::getCount() { return queueLenght; }
int QueuePri::add(int c) {}
int 
