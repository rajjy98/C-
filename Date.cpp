
#include<string>
#include"QuestionTwoClass.h"
using namespace std;
string Days[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
string Months[12] = { "Janaury","February","March","April","May","June","July","August","September","October","November","December" };
QuestionTwoClass::QuestionTwoClass()
{
	dayOfWeek = 0;
	Date = 0;
	year = 0;
	month = 0;
}
void QuestionTwoClass::get(int& _day, int& _month, int& _date, int& _year)
{
	_day = dayOfWeek;
	_year = year;
	_date = Date;
	_month= month;
}
void QuestionTwoClass::set(int _day, int _month, int _date, int _year)
{
	if (_day < 1 || _day > 31)
	{
		cout << "The day must be greater than zero and less than or equal to 31" << endl;
		return;
	}
	if (_month < 1 || _month > 12)
	{
		cout << "The month must be greater than 0 and less than or equal to 12" << endl;
		return;
	}
	if (_date < 1 || _date > 7)
	{
		cout << "The day of the week must be between 1 and 7 inclusively" << endl;
		return;
	}
	if (_year < 1900)
	{
		cout << "The year must be greater than '1900' " << endl;
		return;
	}
	
	dayOfWeek = _day;
	Date = _date;
	month = _month;
	year = _year;
}
void QuestionTwoClass::print()
{
	cout << Days[Date - 1] << "," << Months[month - 1] << " " << dayOfWeek << "," << year << endl;
}