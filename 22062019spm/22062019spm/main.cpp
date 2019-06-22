#include <iostream>
#include "myclass.h"
using namespace std;
int main() {
	
	temp *p = new temp();
	p->show();
	my_ptr ptr(p);
	ptr->show();
	
	temp *arr = new temp[3];
	for (int i = 0; i < 3; i++) {
		arr[i].set(i);
	}
	my_ptr arr_ptr=arr;
	
	arr_ptr++;
	arr_ptr->show();
	delete p;
	delete[] arr;

	
	system("pause");
	
	return 0;
	
}