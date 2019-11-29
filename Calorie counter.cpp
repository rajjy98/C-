Suraj Patel
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int minutes = 1;
	while (minutes <= 50)
	{
		float caloriesBurned = (7.5 * minutes);
		if (minutes % 10 == 0)
		{
			cout << "Congradulations, you have reached: " << endl;
			cout << minutes << " minutes" << endl;
			cout << "Caloric burn: " << endl;
			cout << caloriesBurned << " calories" << endl << endl;

			minutes++;
		}
		else
		{
			minutes++;
		}
	}

	cout << "Great workout today, see you tomorrow!" << endl;
	system("PAUSE");
	return 0;
}
