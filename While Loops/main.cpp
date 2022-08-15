#include<iostream>

using namespace std;

/// Finding Factorial

void main()
{
	int factorial = 1, number;
	while (true)
	{
		int i = 2; // this number for while loop
		cout << "Please enter the number that you want to find factorial of: ";
		cin >> number;
		
		while (i <= number)
		{
			factorial *= i;
			i++;
		}
		cout << "The factorial of number is " << factorial << endl;
		factorial = 1;
	}
}
