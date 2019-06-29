#pragma once
#ifndef QUEUE_H
class Queue {
	int *wait;
	int maxQueueLenght;
	int queueLenght;
	int first;
public:
	Queue(int);
	~Queue();
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

