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
int QueuePri::add(int c,int p) {
	if (!isFull()) {
		wait[queueLenght] = c;
		pri[queueLenght] = p;
		queueLenght++;
		return 1;
	}
	else
		return 0;
}
int QueuePri::extract() {
	if (!isEmpty()) {
		int max_pri=pri[0];
		int max_pri_pos = 0;
		for (int i = 1; i < queueLenght; i++) {
			if (max_pri < pri[i]) {
				max_pri = pri[i];
				max_pri_pos = i;
			}
		}
		int temp = wait[max_pri_pos];//for return
		int temp_pri = pri[max_pri_pos];
		for (int i = max_pri_pos + 1; i < queueLenght; i++) {
			wait[i - 1] = wait[i];
			pri[i - 1] = wait[1];
		}
		queueLenght--;
		return temp;
	}
	else
		return -1;
}
void QueuePri::show() {
	for (int i = 0; i < queueLenght; i++) {
		cout << wait[i] << '(' << pri[i] << ')' << '\t';
	}
	cout << endl;
}