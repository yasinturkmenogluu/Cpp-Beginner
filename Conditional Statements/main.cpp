#include<iostream>

using namespace std;

/// Note Scroring Application

int note;
void main()
{
	cout << "Please enter the note (between 0 and 100)" << endl;
	cin >> note;
	if (note <= 100 && note >= 0)
	{
		if (note <= 100 && note >= 85) { cout << "AA" <<endl; }
		else if (note < 85 && note >= 75) { cout << "BA" << endl; ; }
		else if (note < 75 && note >= 65) { cout << "BB" << endl; ; }
		else if (note < 65 && note >= 55) { cout << "CB" << endl; ; }
		else if (note < 55 && note >= 45) { cout << "CC" << endl; ; }
		else { cout << "The score is FF, so it's failed" << endl; ; }

	}

	else { cout << "Please enter the note between 0 and 100..." << endl;
	}
}
