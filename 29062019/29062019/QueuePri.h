#pragma once
#ifndef QUEUEPRI_H
#define QUEUEPRI_H
class QueuePri {
	int *wait;
	int *pri;
	int maxQueueLenght;
	int queueLenght;
public:
	QueuePri(int);
	~QueuePri();
	int add(int c);
	int extract();
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount();
	void show();
};
#endif // !QUEUEPRI_H
