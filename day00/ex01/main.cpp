#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"
#include <fstream>

int main ()
{
	phonebook myphonebook;
	//contact mycontacts[8];
	std::string str;

	while(1) {
		getline(std::cin, str);
		if (str.compare("ADD") == 0) {
			myphonebook.add();
			//std::cout << "vvvv" << std::endl;
		}
		else if (str.compare("SHOW") == 0)
			myphonebook.show_contacts();
		else if (str.compare("SEARCH") == 0){
			//SEARCH
		}
		else if(str.compare("EXIT") == 0 || std::cin.eof()){
			//delete myphonebook;
			std::exit(1);
		}
	}
//	std::cout << str << std::endl;
	return 0;
}
