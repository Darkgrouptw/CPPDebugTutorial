#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main()
{
	int Tutorial_TableMatirx[10][10];
	int Correct_TableMatrix[10][10];
	#pragma region Tutorial
	for (int i = 0; i < 10; i++)
		for (int j = 0; i < 10; i++)
			Tutorial_TableMatirx[i][j] = i * j;
	#pragma endregion
	#pragma region Correct
	for (int i = 0; i < 10; i ++)
		for (int j = 0; j < 10; j++)
			Correct_TableMatrix[i][j] = i * j;
	#pragma endregion
	#pragma region ¿é¥X
	cout << "Tutorial" << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
			cout << setfill('0') << setw(2) << Tutorial_TableMatirx[i][j] << " ";
		cout << endl;
	}

	cout << "Correct" << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
			cout << setfill('0') << setw(2) << Correct_TableMatrix[i][j] << " ";
		cout << endl;
	}
	#pragma endregion
	system("PAUSE");
	return 0;
}