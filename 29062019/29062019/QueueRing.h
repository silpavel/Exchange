#pragma once
#ifndef QUEUE_H
class QueueRing {
	int *wait;
	int maxQueueLenght;
	int queueLenght;
	int first;
public:
	QueueRing(int);
	~QueueRing();
	int add(int c);
	int extract();
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount();
	void show();
};
#define QUEUE_H
#endif // !QUEUE_H
