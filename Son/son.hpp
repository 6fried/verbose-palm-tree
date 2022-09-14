#ifndef H_SON
#define H_SON
#include "date.hpp"
#include "father.hpp"

class Son : public Father
{
private:
	std::string sonFirstName;
	int age;

public:
	Son(/* args */);
	Son(Son const& tmp);
	Son(Date birth, std::string fName, std::string lName, int inc, std::string firstName, int sonAge);

	string SePresenter();
	int Age();
	std::string getSonFirsName();

	~Son();
};
#endif