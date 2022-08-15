#include<iostream>

using namespace std;

int main()
{
	int hostUserNum, guestUserNum;
	int count = 3; // A maximum of count wrong guesses can be made.

	cout << "Host: ";
	cin >> hostUserNum;
	system("cls");

	while (true)
	{ 
		cout << "Please enter the number between 1 and 9" << endl;

		cout << "Guest: ";
		cin >> guestUserNum;
		
		if (guestUserNum < 1 || guestUserNum > 9) 
		{ 
			cout << "You crossed the limits. Please enter it again..." << endl;
			continue;
		}
				
		if (guestUserNum == hostUserNum)
		{
			cout << "Congrats! You guest Correctly." << endl;
			break;
		}
		
		else {
			cout << "Unfortunately, you guest uncorrectly. Please try again..." << endl;
			count--;
			cout << "You have: " << count << "left" << endl;
		}

		if (count == 0)
		{
			cout << "You have failed and dthe program is terminated..." << endl;
			cout << "The correct number was: " << hostUserNum << endl;
			break;
		}

		cout << "***********************" << endl;
	}

	cout << "The program is end.";
	system("pause>0");
}
