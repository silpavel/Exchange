#include <iostream>
#pragma warning (disable:4996)
#include <string.h>
using namespace std;
int mystrlen(char *s);
int main()
{
	char s1[] = "Bingo";
	char s2[10];
	cout << "Set word: ";
	cin >> s2;
	if (strcmp(s1, s2))
		cout << "Not Bingo.\n";
	else
		cout << "Bingo!\n";
	

	system("pause");
	return 0;
}
int mystrlen(char *s)
{
	int count = 0;
	while ( *(s+count) )
		count++;
	
	return count;
}