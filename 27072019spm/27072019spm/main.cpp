#include <iostream>
#include <windows.h>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	char answer;
	const int msgCount = 8;
	int i, j;
	enum menu { CHOISE = 3, INPUT_FILENAME, INPUT_DIMENTIONS, INPUT_ELEMENTS, FILE_ERROR };
	char msg[msgCount][50] =
	{
		"1. Print from file.\n",
		"2. Save to file.\n",
		"3. Exit.\n",
		"\nYou choise: ",
		"Input file name: ",
		"Input array dimention\n",
		"Input array elements\n",
		"Cannot open file\n",
	};
	do {
		for (int i = 0; i < msgCount; i++) {
			cout << msg[i];
		}
		cin >> answer;
	} while (answer<'1' || answer>'3');
	if (answer == '3') return 0;
	char fileName[80];
	int M, N;//arr dim
	int num;
	cout << "\n" << msg[menu::INPUT_FILENAME];
	cin >> fileName;
	
	if (answer == '1') {
		ifstream inf(fileName, ios::in | ios::_Nocreate);//if file not exist then file not maked.
		if(!inf) {
			cout << endl << msg[menu::FILE_ERROR];
			return 10;
		}
		inf >> M;
		inf >> N;
		
		for (i = 0; i < M; i++) {
			for (j = 0; j < N; j++) {
				inf >> num;
				cout << setw(6)<<num;
			}
			cout << endl;
		}
		system("pause");
		inf.close();
		
	}
	else {
		ofstream outf(fileName, ios::out);
		if (!outf) {
			cout << msg[menu::FILE_ERROR];
			return 1;
		}
		cout << msg[menu::INPUT_DIMENTIONS];
		cout << "M: ";
		cin >> M;
		cout << "N: ";
		cin >> N;
		outf << M << ' ' << N << '\n';
		for (i = 0; i < M; i++) {
			for (j = 0; j < N; j++) {
				cout << "A[" << i << "][" << j << "]="; // A[0][0]=
				cin >> num;
				outf << num << " ";
			}
			outf << '\n';
		}
		
		outf.close();
	}
	//the end
	pause("");
	return 101;
}
