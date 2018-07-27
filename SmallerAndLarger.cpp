// SmallerAndLarger.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Gimme an integer.  That's a number.  A number with no decimal places. \n";
	int smaller{ 0 };
	cin >> smaller;
	cout << "\nNo, no, no.  Make it a bit bigger!\n";
	int larger{ 0 };
	cin >> larger;
	cout << "You're telling me " << larger << " > " << smaller << endl;
	if (smaller < larger)
		cout << "I'm so proud of you! " << larger << " IS larger than " << smaller << "!  Daaaaww, look at you go.\n";
	else if (smaller > larger)
	{
		cout << "You're too cute, aren't you? Lemme fix it for you...\n";
		int temp{ smaller };
		smaller = larger;
		larger = temp;
		cout << larger << " > " << smaller << endl;
		cout << "Yaaay, good job, youuu! :D\n";
	}
	else
		cout << "It's the same number.  Boo, you lose. Primitive human savage.\n";

	return 0;
}

