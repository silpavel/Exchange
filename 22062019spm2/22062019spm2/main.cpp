#include <iostream>
#include "smart.h"
using namespace std;
int main() {
	temp *p = new temp;
	smart_ptr ptr(p);
	ptr->set(100);
	ptr->show();
	smart_ptr ptr2 = ptr;//�� ��������� ����� ������ temp, ������ ������������� ����� ������ �� ������.
	//$kv0z#yaK
	system("pause");
	return 0;
}