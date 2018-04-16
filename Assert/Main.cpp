#include <iostream>
#include <vector>
#include <windows.h>
#include <assert.h>

using namespace std;

int SquareNumber(int num)
{
	return num * num;
}

int main()
{
	cout << SquareNumber(2) << endl;
	// assert(SquareNumber(2) != 4);
	assert(SquareNumber(2) == 4);

	vector<int> numArray;
	//cout << numArray[0] << endl;
	system("PAUSE");
	return 0;
}