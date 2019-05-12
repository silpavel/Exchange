#include <iostream>
using namespace std;
class A {
public:
	A() { cout << "\nA()"; }
	~A() { cout << "\n~A()"; }
};
class B1 : public A {
public:
	B1() { cout << "\tB1()"; }
	~B1() { cout << "\t~B1()"; }
};
class B2 : public A {
public:
	B2() { cout << "\tB2()"; }
	~B2() { cout << "\t~B2()"; }
};
class B3 : public A {
public:
	B3() { cout << "\tB3()"; }
	~B3() { cout << "\t~B3()"; }
};
class C1 : public B1 {
public:
	C1() { cout << "\tC1()"; }
	~C1() { cout << "\t~C1()"; }
};
class C2 : public B2, public B3 {
public:
	C2() { cout << "\tC2()"; }
	~C2() { cout << "\t~C2()"; }
};
class D : public C1, public C2 {
public:
	D() { cout << "\tD()"; }
	~D() { cout << "\t~D()"; }
};
int main(){
	{
		D d;
	}
	system("pause");
	return 0;
}