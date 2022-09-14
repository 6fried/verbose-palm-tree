#ifndef H_DATE
#define H_DATE
#include <iostream>

using namespace std;


class Date
{
public:
	Date();
	Date(int dy, int mn, int yr); // constructor
	void display();				   // function to display date
	int GetMonth();
	void SetMonth(int mn);
	~Date();

private:

	int month, day, year;
	int DaysSoFar();
};
#endif