#include "son.hpp"


Son::Son(/* args */)
{
	Father();
	sonFirstName = "Edgard";
	age = 19;
}

Son::Son(Son const& temp)
{
	// Father(temp);
	sonFirstName = temp.sonFirstName;
	age = temp.age;
}

Son::Son(Date birth, std::string fName, std::string lName, int inc, std::string firstName, int sonAge)
{
	Father(birth, fName, lName, inc);
	age = sonAge;
	sonFirstName = firstName;
}

string Son::SePresenter()
{
	return sonFirstName;
}

int Son::Age(){
	return age;
}

Son::~Son()
{
}
