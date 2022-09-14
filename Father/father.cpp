#include "father.hpp"

int Father::idIndex = 0;

Father::Father()
{
	birthDate = Date(1, 3, 2003);

	firstName = "Leonhart";
	lastName = "De Vinci";
	incomes = 5000; // $/month
	IDnumber = idIndex++;
}

Father::Father(Date birth, std::string fName, std::string lName, int inc)
{
	birthDate = birth;

	firstName = fName;
	lastName = lName;
	incomes = inc; // $/month
	IDnumber = idIndex++;
}

Father::Father(Father const& temp){
	birthDate = temp.birthDate;
	firstName = temp.firstName;
	lastName = temp.lastName;
	incomes = temp.incomes;
	IDnumber = idIndex++;
}

Father::~Father()
{
	
}


