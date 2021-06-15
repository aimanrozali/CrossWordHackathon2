#include "GroupInfo.h"
#include <iostream>

using namespace std;

int main()
{

	string name, gName;
	double marks;
	cout << "Welcome" << endl;
	

	GroupInfo gi[10];
	cout << "How many players? (MAX 10)" << endl;
	int numPlay = 0;
	cin >> numPlay;
	for (int i = 0; i < numPlay; i++) {
		cout << "Insert Player Name:\n";
		cin >> name;
		cin >> gName;
		cin >> marks;

		gi[i].insertPlayer(name, gName, marks);
		marks = 0;
	}

	for (int i = 0; i < numPlay; i++)
	{
		gi[i].displayPlayer();
	}
	return 0;
}