#ifndef H_FATHER
#define H_FATHER

#include "date.hpp"

class Father
{
private:
	Date birthDate;

	std::string firstName;
public:
	Father(/* args */);
	Father(Date birth, std::string fName, std::string lName, int inc);
	~Father();
	Father(Father const& temp);

	Date getBirthDate();

	string getFirstName();

protected:
	int IDnumber;
	static int idIndex;
	std::string lastName;
	int incomes;
	};

#endif // H_FATHER
