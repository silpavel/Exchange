#include <iostream>
#include <ctime>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#include "Tree.h"
void pause(const char*);
Tree Tournament;
void game(char commands[][20], int N) {
	int i, j;
	int p1, p2;//points
	int k;
	Elem* temp;
	for (k = 0; k < 2; k++) {//two games
		for (int i = 0; i < N - 1; i++)
			for (int j = 0; j < N - 1; j++) {
				temp = new Elem;
				if (k == 0) {
					strcpy(temp->name, commands[i]);
					strcpy(temp->opponent, commands[i]);
				}
				else {}
				p1 = rand() % 6;
				p2 = rand() % 6;
				if (p1 > p2) {
					temp->ownerPoints = 0;
					temp->oppPoints = 3;
				}
				else if (p1 == p2) {
					temp->ownerPoints = 1;
					temp->oppPoints = 1;
				}
				else {//p1 < p2
					temp->ownerPoints = 3;
					temp->oppPoints = 0;
				}
				sprintf(temp->match, " %d : %d ", p1, p2);
				Tournament.insert(temp);

			}
	}
}

int main() {
	srand(time(0));
	const int N = 4;
	char commands[N][20] =
	{
		"Arsenal",
		"Liverpool",
		"Lids Manchester",
		"Spartak"
	};
	game(Commands, N);
	Tournament.print(.getRoot);

	pause("End program\n");
	return 0;
}
void pause(const char* chh) {
	char ch[100];
	cout << chh << "[Press Enter]";
	cin.getline(ch, 100, '\n');

}