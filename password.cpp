#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	char password[100];
	int lowerCase = 0;
	int upperCase = 0;
	int dollar = 0;
	int adjacentNumber = 0;
	int flag = 1;
	cout << "Please enter the Password: " << endl;
	cin >> password;
	int length = strlen(password);
	for (int i = 0; i < length; i++)
	{
		if (password[i] >= 65 && password[i] <= 90)
		{
			upperCase = 1;
		}
		if (password[i] >= 97 && password[i] <= 122)
		{
			lowerCase = 1;
		}
		if (password[i] == '$')
		{
			dollar++;
		}
		if (password[i] >= 48 && password[i] <= 57)
		{
			if (i + 1 < length)
			{
				if (password[i + 1] >= 48 && password[i + 1] <= 57)
				{
					adjacentNumber = 1;
				}
			}
		}
	}
		if (length < 10)
		{
			flag = 0;
			cout << "Please make sure the password is 10 characters long" << endl;
		}
		if (upperCase == 0)
		{
			flag = 0;
			cout << "Please make sure the password contains at least 1 capital letter" << endl;
		}
		if (lowerCase == 0)
		{
			flag = 0;
			cout << "Please make sure the password contains at least 1 lower case letter" << endl;
		}
		if (dollar != 2)
		{
			flag = 0;
			cout << "Please make sure the password contains at least 2 '$' symbols " << endl;
		}
		if (adjacentNumber == 0)
		{
			flag = 0;
			cout << "Please make sure the password contains at least 2 numbers that are adjacent to each other" << endl;
		}
		if (flag == 1)
		{
			cout << "That is a valid password" << endl;
		}
	
	system("PAUSE");
	return 0;
}

