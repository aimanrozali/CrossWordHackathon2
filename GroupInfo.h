#ifndef GROUPINFO_H
#define GROUPINFO_H
#include <string>
using namespace std;
//template <class T>
class GroupInfo
{
private:
	struct PlayerList
	{
		string playerName; // Store player name
		string groupName; // Store group name
		double marks; // Store player marks
		struct PlayerList* next;
	};

	PlayerList* head;

public:
	//Constructor
	GroupInfo()
	{
		head = nullptr;
	}

	//Destructor
	~GroupInfo() {}

	//Operation
	void insertPlayer(string,string,double);
	void displayPlayer() const;
};

#endif

