#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void sixSixA();
void eightEightA();
void tenTenA();

void sixSixB();
void eightEightB();
void tenTenB();

int main()
{
	int enteredSize;
	int enteredStyle;
	int choosenMethod;
	
	cout << "Enter a size (6, 8, 10)" << " ";
	cin >> enteredSize;
	
	cout << "Enter a style (1. Spiral, 2. Snake)" << " ";
	cin >> enteredStyle;

	choosenMethod = enteredStyle + enteredSize;
	
	switch (choosenMethod)
	{
	case 7:
		sixSixA();
		return 0;
	case 9:
		eightEightA();
		return 0;
	case 11:
		tenTenA();
		return 0;
	case 8:
		sixSixB();
		return 0;
	case 10:
		eightEightB();
		return 0;
	case 12:
		tenTenB();
		return 0;
	default:
		return 0;
	}

	cout << "Choose a method to move blocks";
	int methodChosen;
	cin >> methodChosen;
}

void sixSixA()
{
	const int n = 6, m = 6;
	const int k = 36, l = 2;
	string emptArr[n][m];
	int indexes[k][l] = { {0,0}, {0,1}, {0,2}, {0,3}, {0,4}, {0,5}, {1,5}, {2,5}, {3,5}, {4,5}, {5,5}, {5,4}, {5,3}, {5,2}, {5,1}, {5,0}, {4,0}, {3,0}, {2,0}, {1,0}, {1,1}, {1,2}, {1,3}, {1,4}, {2,4}, {3,4}, {4,4}, {4,3}, {4,2}, {4,1}, {3,1}, {2,1}, {2,2}, {2,3}, {3,3}, {3,2} };

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			emptArr[i][j] = " ";

	for (int i = 0; i < 36; i++) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				cout << setw(3) << right << emptArr[i][j];
			cout << endl;
		}
		system("cls");
		emptArr[indexes[i][0]][indexes[i][1]] = to_string((rand() % 5) + 1);
	}
}

void eightEightA()
{
	const int n = 8, m = 8;
	const int k = 64, l = 2;
	string emptArr[n][m];
	int indexes[k][l] = { {0,0}, {0,1}, {0,2}, {0,3}, {0,4}, {0,5}, {0,6},  {0,7}, {1,7}, {2,7}, {3,7}, {4,7}, {5,7}, {6,7}, {7,7},
		{7,6}, {7,5}, {7,4}, {7,3}, {7,2}, {7,1}, {7,0},
		{6,0}, {5,0}, {4,0}, {3,0}, {2,0}, {1,0},
		{1,1}, {1,2}, {1,3}, {1,4}, {1,5}, {1,6}, {2,6}, {3,6}, {4,6}, {5,6}, {6,6},
		{6,5}, {6,4}, {6,3}, {6,2}, {6,1}, {5,1}, {4,1}, {3,1}, {2,1}, {2,2}, {2,3}, {2,4}, {2,5},
		{3,5}, {4,5}, {5,5}, {5,4}, {5,3}, {5,2}, {4,2}, {3,2}, {3,3}, {3,4}, {4,4}, {4,3} };

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			emptArr[i][j] = " ";

	for (int i = 0; i < 64; i++) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				cout << setw(3) << right << emptArr[i][j];
			cout << endl;
		}
		system("cls");
		emptArr[indexes[i][0]][indexes[i][1]] = to_string((rand() % 7) + 1);
	}
}

void tenTenA()
{
	const int n = 10, m = 10;
	const int k = 100, l = 2;
	string emptArr[n][m];
	int indexes[k][l] =
	{ {0,0}, {0,1}, {0,2}, {0,3}, {0,4}, {0,5}, {0,6}, {0,7}, {0,8}, {0,9}, {1,9}, {2,9}, {3,9}, {4,9}, {5,9}, {6,9}, {7,9}, {8,9}, {9,9},
		{9,8}, {9,7}, {9,6}, {9,5}, {9,4}, {9,3}, {9,2}, {9,1}, {9,0}, {8,0}, {7,0}, {6,0}, {5,0}, {4,0}, {3,0}, {2,0}, {1,0},
		{1,1}, {1,2}, {1,3}, {1,4}, {1,5}, {1,6}, {1,7}, {1,8}, {2,8}, {3,8}, {4,8}, {5,8}, {6,8}, {7,8}, {8,8},
		{8,7}, {8,6}, {8,5}, {8,4}, {8,3}, {8,2}, {8,1}, {7,1}, {6,1}, {5,1}, {4,1}, {3,1}, {2,1}, {2,2}, {2,3}, {2,4}, {2,5}, {2,6}, {2,7},
		{3,7}, {4,7}, {5,7}, {6,7}, {7,7}, {7,6}, {7,5}, {7,4}, {7,3}, {7,2}, {6,2}, {5,2}, {4,2}, {3,2}, {3,3}, {3,4}, {3,5}, {3,6},
		{4,6}, {5,6}, {6,6}, {6,5}, {6,4}, {6,3}, {5,3}, {4,3}, {4,4}, {4,5}, {5,5}, {5,4} };

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			emptArr[i][j] = " ";

	for (int i = 0; i < 100; i++) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				cout << setw(3) << right << emptArr[i][j];
			cout << endl;
		}
		system("cls");
		emptArr[indexes[i][0]][indexes[i][1]] = to_string((rand() % 9) + 1);
	}
}


void sixSixB()
{
	const int n = 6, m = 6;
	const int k = 36, l = 2;
	string emptArr[n][m];
	int indexes[k][l] = { {0,0}, {1,0}, {2,0}, {3,0}, {4,0}, {5,0}, {5,1}, {4,1}, {3,1}, {2,1}, {1,1}, {0,1}, {0,2}, {1,2}, {2,2}, {3,2}, {4,2}, {5,2}, {5,3}, {4,3}, {3,3}, {2,3}, {1,3}, {0,3}, {0,4}, {1,4}, {2,4}, {3,4}, {4,4}, {5,4}, {5,5}, {4,5}, {3,5}, {2,5}, {1,5}, {0,5} };

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			emptArr[i][j] = " ";

	for (int i = 0; i < 36; i++) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				cout << setw(3) << right << emptArr[i][j];
			cout << endl;
		}
		system("cls");
		emptArr[indexes[i][0]][indexes[i][1]] = to_string((rand() % 5) + 1);
	}
}

void eightEightB()
{
	const int n = 8, m = 8;
	const int k = 64, l = 2;
	string emptArr[n][m];
	int indexes[k][l] = { {0,0}, {1,0}, {2,0}, {3,0}, {4,0}, {5,0}, {6,0}, {7,0},  {7,1},  {6,1}, {5,1}, {4,1}, {3,1}, {2,1}, {1,1}, {0,1}, {0,2}, {1,2}, {2,2}, {3,2}, {4,2}, {5,2}, {6,2}, {7,2}, {7,3}, {6,3}, {5,3}, {4,3}, {3,3}, {2,3}, {1,3}, {0,3}, {0,4}, {1,4}, {2,4}, {3,4}, {4,4}, {5,4}, {6,4}, {7,4}, {7,5}, {6,5}, {5,5}, {4,5}, {3,5}, {2,5}, {1,5}, {0,5}, {0,6}, {1,6}, {2,6}, {3,6}, {4,6}, {5,6}, {6,6}, {7,6}, {7,7}, {6,7}, {5,7}, {4,7}, {3,7}, {2,7}, {1,7}, {0,7} };

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			emptArr[i][j] = " ";

	for (int i = 0; i < 64; i++) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				cout << setw(3) << right << emptArr[i][j];
			cout << endl;
		}
		system("cls");
		emptArr[indexes[i][0]][indexes[i][1]] = to_string((rand() % 7) + 1);
	}
}

void tenTenB()
{
	const int n = 10, m = 10;
	const int k = 100, l = 2;
	string emptArr[n][m];
	int indexes[k][l] = { {0,0}, {1,0}, {2,0}, {3,0}, {4,0}, {5,0}, {6,0}, {7,0}, {8,0}, {9,0},
		{9,1}, {8,1}, {7,1}, {6,1}, {5,1}, {4,1}, {3,1}, {2,1}, {1,1}, {0,1},
		{0,2}, {1,2}, {2,2}, {3,2}, {4,2}, {5,2}, {6,2}, {7,2}, {8,2}, {9,2}, {9,3}, {8,3}, {7,3}, {6,3}, {5,3}, {4,3}, {3,3}, {2,3}, {1,3}, {0,3}, {0,4},
		{1,4}, {2,4}, {3,4}, {4,4}, {5,4}, {6,4}, {7,4}, {8,4}, {9,4}, {9,5}, {8,5}, {7,5}, {6,5}, {5,5}, {4,5}, {3,5}, {2,5}, {1,5}, {0,5}, {0,6}, {1,6}, {2,6}, {3,6}, {4,6}, {5,6}, {6,6}, {7,6}, {8,6}, {9,6}, {9,7}, {8,7}, {7,7}, {6,7}, {5,7}, {4,7}, {3,7}, {2,7}, {1,7}, {0,7}, {0,8}, {1,8}, {2,8}, {3,8}, {4,8}, {5,8}, {6,8}, {7,8}, {8,8}, {9,8}, {9,9}, {8,9}, {7,9}, {6,9}, {5,9}, {4,9}, {3,9}, {2,9}, {1,9}, {0,9} };

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			emptArr[i][j] = " ";

	for (int i = 0; i < 100; i++) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				cout << setw(3) << right << emptArr[i][j];
			cout << endl;
		}
		system("cls");
		emptArr[indexes[i][0]][indexes[i][1]] = to_string((rand() % 9) + 1);
	}
}
