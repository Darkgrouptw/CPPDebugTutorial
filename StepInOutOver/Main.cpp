#include <iostream>
#include <windows.h>

using namespace std;

void Tutorial_Fibonacci(int a, int b, int t, int end)
{
	if (t == end)
	{
		cout << a + b << " ";
		Tutorial_Fibonacci(b, a + b, t + 1, end);
	}
}
void Correct_Fibonacci(int a, int b, int t, int end)
{
	if (t != end)
	{
		cout << a + b << " ";
		Correct_Fibonacci(b, a + b, t + 1, end);
	}
}

int main()
{
	#pragma region ¿é¥X
	cout << 1 << " " << 1 << " ";
	Tutorial_Fibonacci(1, 1, 0, 5);
	cout << endl;

	cout << 1 << " " << 1 << " ";
	Correct_Fibonacci(1, 1, 0, 5);
	cout << endl;
	#pragma endregion
	system("PAUSE");
	return 0;
}