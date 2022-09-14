#include "son.hpp"
#include "father.hpp"
#include "date.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <map>


int main(){
	int year;
	int month;
	int day;

	std::string firstName;
	std::string lastName;
	int incomes;

	int age;
	string sonFirstName;

	// Father
	std::cout << "Informations relatives au père" << endl;
	std::cout << "Nom" << endl;
	std::cin >> lastName;
	std::cout << "Prénom" << endl;
	std::cin >> firstName;
	std::cout << "Année de naissance" << endl;
	std::cin >> year;
	std::cout << "Mois de naissance" << endl;
	std::cin >> month;
	std::cout << "Jour de naissance" << endl;
	std::cin >> day;
	std::cout << "Revenus" << endl;
	std::cin >> incomes;

	Date birthDate = Date(day, month, year);

	Father father(birthDate, firstName, lastName, incomes);

	std::cout << "Informations relatives au Fils" << endl;
	std::cout << "Nom" << endl;
	std::cin >> lastName;
	std::cout << "Prénom" << endl;
	std::cin >> firstName;
	std::cout << "Année de naissance" << endl;
	std::cin >> year;
	std::cout << "Mois de naissance" << endl;
	std::cin >> month;
	std::cout << "Jour de naissance" << endl;
	std::cin >> day;
	std::cout << "Revenus" << endl;
	std::cin >> incomes;
	std::cout << "Age" << endl;
	std::cin >> age;
	std::cout << "Prénom du fils" << endl;
	std::cin >> sonFirstName;

	birthDate = Date(day, month, year);

	Son son1(birthDate, firstName, lastName, incomes, sonFirstName, age);

	std::cout << "Informations relatives à un second Fils" << endl;
	std::cout << "Nom" << endl;
	std::cin >> lastName;
	std::cout << "Prénom" << endl;
	std::cin >> firstName;
	std::cout << "Année de naissance" << endl;
	std::cin >> year;
	std::cout << "Mois de naissance" << endl;
	std::cin >> month;
	std::cout << "Jour de naissance" << endl;
	std::cin >> day;
	std::cout << "Revenus" << endl;
	std::cin >> incomes;
	std::cout << "Age" << endl;
	std::cin >> age;
	std::cout << "Prénom du fils" << endl;
	std::cin >> sonFirstName;

	birthDate = Date(day, month, year);

	Son son2(birthDate, firstName, lastName, incomes, sonFirstName, age);

	if (son1.Age() > son2.Age()){
		std::cout << "Le plus agé des deux fils est: " << son1.SePresenter() << endl;
	}
	else{
		std::cout << "Le plus agé des deux fils est: " << son2.SePresenter() << endl;
	}

	return 0;
}