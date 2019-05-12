#include <iostream>
#include "first.h"
#include <fstream>
#include "second.h"

using namespace std;
int main()
{
	char steps[] = "DDDDDUUUUU";
	int lev[sizeof(steps)]={};
	int level = 0;
	for (int i = 0; i < sizeof(steps); i++)
	{
		if (steps[i] == 'D') level--;
		if (steps[i] == 'U') level++;
		lev[i] = level;
	}
	for (int y = 0; y < sizeof(steps); y++)
	{
		for (int x = 0; x < sizeof(steps); x++)
		{
			if (lev[x] == y) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	cout << endl;
	//========
	system("pause");
	return 0;
}