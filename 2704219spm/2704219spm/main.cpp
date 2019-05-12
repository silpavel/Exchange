#include <iostream>
#include "point3D.h"

using namespace std;
int main()
{
	
	point3D *pB = new point3D[10];
	
	for (int i = 0; i < 10; i++)
		pB[i].show();
	delete[] pB;
	
	
	//=======
	system("pause");
	return 0;
}