#include <iostream>
#include <string.h>
#include <time.h>
#include "Stack.h"
#include "Queue.h"
#include "QueueRing.h"
#include "QueuePri.h"
using namespace std;
void ps();//pause+enter
void task1();
void task2();//Queue
void task3();//QueueRing
void task4();//QueuePriority
int main() {
	srand(time(0));
	//task1();
	task2();
	ps();
	return 0;
}
void task1() {
	Stack st;
	char c;
	while (!st.isFull()) {
		c = rand() % 10 + '0';
		st.push(c);
	}
	st.show();
	st.pop();
	st.pop();
	st.show();
}
void task2() {
	Queue qu(50);
	for (int i = 1; i < 50; i++) {
		qu.add(rand()%50);
	}
	//qu.show();
	cout << qu.extract() << endl;
	cout << qu.extract() << endl;
	//qu.show();
}
void ps() {
	cout << "Press enter!" << endl;
	char cgl[10];
	cin.getline(cgl, '\n');
}