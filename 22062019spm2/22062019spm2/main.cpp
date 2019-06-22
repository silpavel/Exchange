#include <iostream>
#include "smart.h"
using namespace std;
int main() {
	/*
	temp *p = new temp;
	smart_ptr ptr(p);
	ptr->set(100);
	ptr->show();
	smart_ptr ptr2 = ptr;//не создается новый объект temp, только увеличивается число ссылок на объект.
	int i = 10;
	for (; i--;) cout << i << ' ';
	cout << endl;
	
	cout << sum(6, 1, 2, 3, 4, 5) << endl;
	cout << sum2(1, 2, 3, 4, 5,0) << endl;
	*/
	anytype(4, true, 3, 8, 9, 4);
	cout << endl;
	anytype(2, false, 2.5, 1.0);
	cout << endl;
	system("pause");
	return 0;
}