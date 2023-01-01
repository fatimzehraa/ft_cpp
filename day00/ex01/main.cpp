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
	std::string str;
	int index;

	while(1) {
		std::cout << "insert a command, the program accepts only 3 commands which are ADD, SEARCH, and EXIT" << std::endl;
		getline(std::cin, str);
		if (str.compare("ADD") == 0) {
			myphonebook.add();
			//std::cout << "vvvv" << std::endl;
		}
		else if (str.compare("SEARCH") == 0){
			myphonebook.show_contacts();
			std::cin >> index;
			myphonebook.search(index);
			//SEARCH
		}
		else if(str.compare("EXIT") == 0 || std::cin.eof()){
			//delete myphonebook;
			return(1);
		}
	}
//	std::cout << str << std::endl;
	return 0;
}
