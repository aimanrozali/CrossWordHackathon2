#include "GroupInfo.h"
#include <iostream>

using namespace std;

int main()
{

	string name, gName;
	double marks;
	char prompt;
	cout << "Welcome" << endl;
	

	GroupInfo gi[10]; // Allocate Group
	cout << "How many Group? (MAX 10)" << endl;
	int numPlay = 0;
	cin >> numPlay;
	for (int i = 0; i < numPlay; i++) {
		cout << "Enter Information for Group " << i + 1 << endl;
		cout << "Enter Player?(Y to enter) ";
		cin >> prompt;
		while (prompt == 'Y') {
			cout << "Insert Player Name:\n";
			cin >> name;
			cin >> gName;
			cin >> marks;

			gi[i].insertPlayer(name, gName, marks);
			marks = 0;
			cout << "Enter Player?(Y to enter) ";
			cin >> prompt;
		}
	}

	for (int i = 0; i < numPlay; i++)
	{
		cout << "For Group " << i + 1 << endl;
		gi[i].displayPlayer();
	}
	return 0;
}