//Suraj Patel
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int years; 
	cout << "Enter a number of years: " << endl;
	cin >> years;
	int scores = (years / 20);
	int remainderOne = (years % 20);
	int decades = (remainderOne / 10);
	int remainingYears = (remainderOne % 10);

	cout << years << " years is a result of: " << endl;
	cout << scores << " score(s)" << endl;
	cout << decades << " decade(s)" << endl;
	cout << remainingYears << " year(s)" << endl;
	system("PAUSE");
	return 0;

}