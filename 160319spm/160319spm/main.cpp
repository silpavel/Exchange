#include <iostream>
using namespace std;
class point
{
	int x;
	int y;
	
public:
	point() : point(0, 0) { }//constructor without parameters
	point(int x, int y):x(x),y(y) {}
	~point() {}
	void setXY(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
	void show() { cout << "x: " << x << '\t' << "y: " << y << endl; }
	
};



int main()
{
	point *pt = new point(9,78);
	cout << pt->getX() << endl;
	pt->setXY(89, 34);
	cout << pt->getY() << endl;
	pt->show();
	point pp;
	pp.show();
	
	delete pt;
	system("pause");
	return 0;
}