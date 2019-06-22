#include "myclass.h"
void temp::show() {
	cout << "temp=" << t << endl;
}
ostream &operator<<(ostream &out, temp &tt) {
	out << tt.t;
	return out;
}