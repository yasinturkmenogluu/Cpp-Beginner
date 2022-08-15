#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int height, counter;
	char symbol;

	cout << "height: ";
	cin >> height;

	cout << "symbol: ";
	cin >> symbol;

	// Normal Triangle
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(2) << symbol;
		}
		cout << endl;
	}

	// Reverse Triangle
	for (int i = 1; i <= height; i++)
	{
		for (int j = height; j >= i; j--)
		{
			cout << setw(2) << symbol;
		}
		cout << endl;
	}

}
