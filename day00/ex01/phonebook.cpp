#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <ostream>
#include <iomanip>

phonebook::phonebook(){
	std::cout << "phonebook constructor" << std::endl;
	size = 0;
//	contacts = new contact[8];
}

std::string get_info(std::string s)
{
	std::string val;
	do
	{
		//if (!std::cin.eof())
			std::cout << s << ": " << std::flush;
		//std::cin.ignore();
		getline(std::cin, val);
	} while(!std::cin.eof() && val.empty());
	std::cout << "val = " << val << std::endl;;
	return val;
}

//static variable that re initialize when hits 9
void phonebook::add(){
	static int i;

	if (i == 8)
		i = 0;
	contacts[i].set_first_name(get_info("enter first name"));
	contacts[i].set_last_name(get_info("enter last name"));
	contacts[i].set_nickname(get_info("enter nickname"));
	contacts[i].set_phone_number(get_info("enter phone_number"));
	contacts[i].set_darkest_secret(get_info("enter darkest_secret"));
	if (size < 8)
		size++;
	i++;
}
void trim(std::string s){
	if (s.size() < 10) {
		std::cout << "|" << std::setw(10) << s;
	}
	else if( s.size() == 10){
		std::cout << "|" << s;
		
	}
	else{
		std::cout << "|" << s.substr(0,9) << ".";
	}
}

void phonebook::show_contacts(){
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < this->size; i++) {
		std::cout << "|" << std::setw(10) << i ;
		trim(contacts[i].get_first_name());
		trim(contacts[i].get_last_name());
		trim(contacts[i].get_nickname());
		std::cout << "|" << std::endl;
	}
}

void phonebook::search(int index){
	for (int i = 0; i < size; i++) {
		if (index == i){
			std::cout << "first name: " << contacts[i].get_first_name() << std::endl;
			std::cout << "last name: " << contacts[i].get_last_name() << std::endl;
			std::cout << "nickname: " << contacts[i].get_nickname() << std::endl;
			std::cout << "phone_number: " << contacts[i].get_phone_number() << std::endl;
			std::cout << "darkest_secret: " << contacts[i].get_darkest_secret() << std::endl;
		}
	}
//	return NULL;
}
phonebook::~phonebook(){
	std::cout << "phonebook destructor" << std::endl;
}
