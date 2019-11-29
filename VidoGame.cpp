#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct videogame
{

	char name[50];
	int maxPlayers;
	float rating;
};


int main()
{
	videogame x;
	cout << "Please enter the name of the videogame: " << endl;
	cin >> x.name;
	cout << "Please enter the maximum number of players: " << endl;
	cin >> x.maxPlayers;
	cout << "Please enter the ESRB rating: " << endl;
	cin >> x.rating;
	
	cout << "Name: " << x.name << endl;
	cout << "Maximum number of players: " << x.maxPlayers << endl;
	cout << "ESBN rating: " << x.rating << endl;
	system("PAUSE");
	return 0;
}

