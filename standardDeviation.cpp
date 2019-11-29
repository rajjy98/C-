#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double main()
{
	double numOne = 40;
	double numTwo = 10;
	double numThree = 109;
	double numFour = 30;
	double numFive = 10;

	double total = (numOne + numTwo + numThree + numFour + numFive);
	double average = (total / 5);
	cout << "total: " << total << endl;
	cout << "average: " << average << endl;


	double repOne = (numOne - average) * (numOne - average);
	double repTwo = (numTwo - average) * (numTwo - average);
	double repThree = (numThree - average) * (numThree - average);
	double repFour = (numFour - average) * (numFour - average);
	double repFive = (numFive - average) * (numFive - average);
	double repTotal = (repOne + repTwo + repThree + repFour + repFive);
	double repAverage = (repTotal / 5);
	double standardDeviation = sqrt(repAverage);
	cout << setprecision(3);
	cout << "standard devidation: " << standardDeviation;
