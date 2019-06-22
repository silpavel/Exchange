#include <iostream>
#include "smart.h"
using namespace std;
int main() {
	temp *p = new temp;
	smart_ptr ptr(p);
	ptr->set(100);
	ptr->show();
	smart_ptr ptr2 = ptr;//не создается новый объект temp, только увеличивается число ссылок на объект.
	//$kv0z#yaK
	system("pause");
	return 0;
}