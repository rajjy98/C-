#include <iostream>
#include <string>
#include <math.h>
#include "numbers.h"
using namespace std;
void Numbers::print()
{
	int x;
	string thou = " thousand ";
	string below20[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen","fifteen","sixteen", "seventeen","eighteen","nineteen" };
	string tens[] = { "zero", "ten", "twenty", "thirty","fourty", "fifty","sixty", "seventy","eighty", "ninety" };
	string hundred = " hundred ";
	
	
	if (number < 0)
	{
		cout << "The number is negative ";
		number = abs(number);
		x = number / 1000;
	}
	if (x > 0)
	{
		cout << " " << below20[x] << thou;
		number %= 1000;
		x = number / 100;
	}
	if (x > 0)
	{
		cout << below20[x] << hundred;
		number %= 100;
		if (number >= 20)
		{
			number = number / 10;
			if (x > 0)
			{
				cout << tens[x] << " ";
			}
			else if (number >= 10)
			{
				cout << below20[number] << " ";
				return;
			}
			number %= 10;
			if (number > 0)
			{
				cout << below20[number];
			}
			cout << " ";
		}
	}
}











