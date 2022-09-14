#include "date.hpp"

int _max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int _min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

// constructor definition
Date::Date()
{
	month = day = year = 1;
}

Date::Date(int dy, int mn, int yr)
{
	static int length[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	month = _max(1, mn);
	month = _min(month, 12);

	day = _max(1, dy);
	day = _min(day, length[month]);

	year = _max(1, yr);
}

void Date::display()
{
	static char *name[] = {"nothing", "January", "February", "March", "April",
						   "May", "June", "July", "August", "September", "October",
						   "November", "December"};

	cout << '\n'
		 << name[month] << ' ' << day << "," << year << '\n';
	cout << "Days so far: " << DaysSoFar() << '\n';
}

Date::~Date()
{
}

int Date::DaysSoFar()
{
	int total = 0;
	static int length[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int i = 1; i < month; i++)
		total += length[i];
	total += day;
	return (total);
}

int Date::GetMonth()
{
	return month;
}

void Date::SetMonth(int mn)
{
	month = _max(1, mn);
	month = _min(month, 12);
}
