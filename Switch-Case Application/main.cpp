#include<iostream>

using namespace std;

int main()
{
	float num1, num2;
	char operation;

	cout << "* **Calculater Application * **" << endl;

	
	cout << "Please enter the num1, operation, and num2 in order: ";
	cin >> num1 >> operation >> num2;
		
	switch (operation)
	{
	    case '+': cout << num1 << operation << num2 << "=" << num1 + num2 << endl; break;
	    case '-': cout << num1 << operation << num2 << "=" << num1 - num2 << endl; break;
	    case '*': cout << num1 << operation << num2 << "=" << num1 * num2 << endl; break;
	    case '/': cout << num1 << operation << num2 << "=" << num1 / num2 << endl; break;
	    case '%':
		    ((int)num1 == num1 && (int)num2 == num2) ?
		    cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2 << endl :
		    cout << "Not valid..." << endl;
	            break;
		
	    default:
		    cout << "Not valid operation!";
		    break;
		
	

	}

}
